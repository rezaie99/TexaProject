/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-A71
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/cc26xx/Boot.h>
#include <ti/sysbios/family/arm/cc26xx/Power.h>
#include <ti/sysbios/family/arm/cc26xx/Timer.h>
#include <ti/sysbios/family/arm/cc26xx/TimestampProvider.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Mailbox.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/rom/cortexm/cc26xx/CC26xx.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/LoggerCallback.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysCallback.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Types.h>

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.cc26xx.Boot INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.cc26xx.Power INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.cc26xx.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_cc26xx_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_cc26xx_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_cc26xx_Timer_Module__ ti_sysbios_family_arm_cc26xx_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_cc26xx_Timer_Object__ {
    const ti_sysbios_family_arm_cc26xx_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt32 period;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz frequency;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt64 period64;
    xdc_UInt64 savedCurrCount;
    xdc_UInt64 prevThreshold;
    xdc_UInt64 nextThreshold;
} ti_sysbios_family_arm_cc26xx_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_cc26xx_Timer_Object__ obj;
} ti_sysbios_family_arm_cc26xx_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_cc26xx_Timer___VERS
    #define ti_sysbios_family_arm_cc26xx_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_cc26xx_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.cc26xx.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__ *__fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    xdc_UInt8 priority;
    xdc_Int16 intNum;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_m3_Hwi___VERS
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_cc26xx_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_cc26xx_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock_TimerProxy___VERS
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Event___VERS
    #define ti_sysbios_knl_Event___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Event___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Mailbox_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Mailbox_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Mailbox_Module__ ti_sysbios_knl_Mailbox_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* <-- ti_sysbios_knl_Semaphore_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Mailbox_Object__ {
    xdc_runtime_IHeap_Handle heap;
    xdc_SizeT msgSize;
    xdc_UInt numMsgs;
    xdc_Ptr buf;
    xdc_UInt numFreeMsgs;
    __TA_ti_sysbios_knl_Mailbox_Instance_State__allocBuf allocBuf;
    ti_sysbios_knl_Queue_Object__ Object_field_dataQue;
    ti_sysbios_knl_Queue_Object__ Object_field_freeQue;
    ti_sysbios_knl_Semaphore_Object__ Object_field_dataSem;
    ti_sysbios_knl_Semaphore_Object__ Object_field_freeSem;
} ti_sysbios_knl_Mailbox_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Mailbox_Object__ obj;
} ti_sysbios_knl_Mailbox_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Mailbox___VERS
    #define ti_sysbios_knl_Mailbox___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Mailbox___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.CC26xx INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.LoggerCallback INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerCallback_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerCallback_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerCallback_Module__ xdc_runtime_LoggerCallback_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_LoggerCallback_Object__ {
    const xdc_runtime_LoggerCallback_Fxns__ *__fxns;
    xdc_Bool enabled;
    xdc_UArg context;
    xdc_UArg arg;
} xdc_runtime_LoggerCallback_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerCallback_Object__ obj;
} xdc_runtime_LoggerCallback_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_LoggerCallback___VERS
    #define xdc_runtime_LoggerCallback___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_LoggerCallback___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysCallback INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Types INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(ti_sysbios_interfaces_IRomDevice_Interface__BASE__C, ".const:ti_sysbios_interfaces_IRomDevice_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IRomDevice_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};

#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x25, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        NULL, /* __delete */
        NULL, /* __label */
        0x2f, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        NULL, /* __delete */
        NULL, /* __label */
        0x30, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        NULL, /* __delete */
        NULL, /* __label */
        0x2d, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.CC26xx VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__FXNS__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__FXNS__C");
const ti_sysbios_rom_cortexm_cc26xx_CC26xx_Fxns__ ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IRomDevice_Interface__BASE__C, /* __base */
    &ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_rom_cortexm_cc26xx_CC26xx_getRevision__E,
    ti_sysbios_rom_cortexm_cc26xx_CC26xx_checkRevision__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x17, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.LoggerCallback VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__FXNS__C, ".const:xdc_runtime_LoggerCallback_Module__FXNS__C");
const xdc_runtime_LoggerCallback_Fxns__ xdc_runtime_LoggerCallback_Module__FXNS__C = {
    (void*)&xdc_runtime_ILogger_Interface__BASE__C, /* __base */
    &xdc_runtime_LoggerCallback_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_LoggerCallback_enable__E,
    xdc_runtime_LoggerCallback_disable__E,
    xdc_runtime_LoggerCallback_write0__E,
    xdc_runtime_LoggerCallback_write1__E,
    xdc_runtime_LoggerCallback_write2__E,
    xdc_runtime_LoggerCallback_write4__E,
    xdc_runtime_LoggerCallback_write8__E,
    {
        xdc_runtime_LoggerCallback_Object__create__S,
        NULL, /* __delete */
        NULL, /* __label */
        0x8, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysCallback VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__FXNS__C, ".const:xdc_runtime_SysCallback_Module__FXNS__C");
const xdc_runtime_SysCallback_Fxns__ xdc_runtime_SysCallback_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysCallback_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysCallback_abort__E,
    xdc_runtime_SysCallback_exit__E,
    xdc_runtime_SysCallback_flush__E,
    xdc_runtime_SysCallback_putch__E,
    xdc_runtime_SysCallback_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0xc, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* __base */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0xe, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.cc26xx.Boot DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.cc26xx.Power DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_cc26xx_Power_Module_State__ {
    xdc_UInt32 constraintsMask;
    ti_sysbios_family_arm_cc26xx_Power_TransitionState state;
    xdc_Bool xoscPending;
    ti_sysbios_knl_Queue_Object__ Object_field_notifyQ;
    ti_sysbios_knl_Clock_Object__ Object_field_clockObj;
    ti_sysbios_knl_Clock_Object__ Object_field_xoscClockObj;
    ti_sysbios_knl_Clock_Object__ Object_field_lfClockObj;
} ti_sysbios_family_arm_cc26xx_Power_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_cc26xx_Power_Module_State__ ti_sysbios_family_arm_cc26xx_Power_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.cc26xx.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_cc26xx_Timer_Object__ ti_sysbios_family_arm_cc26xx_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_cc26xx_Timer_Module_State__ {
    xdc_UInt availMask;
    ti_sysbios_family_arm_cc26xx_Timer_Handle handle;
} ti_sysbios_family_arm_cc26xx_Timer_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_cc26xx_Timer_Module_State__ ti_sysbios_family_arm_cc26xx_Timer_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.cc26xx.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_State__ {
    ti_sysbios_family_arm_cc26xx_Timer_Handle timer;
} ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_State__ ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Char *taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_SizeT isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    xdc_Ptr dispatchTable;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> exceptionHandler */
extern xdc_Void exceptionHandler(xdc_UInt*,xdc_UInt);

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[1664];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[1664] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> uartLog_flush */
extern xdc_Void uartLog_flush(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[6];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.CC26xx DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerCallback DECLARATIONS ========
 */

/* Object__table__V */
xdc_runtime_LoggerCallback_Object__ xdc_runtime_LoggerCallback_Object__table__V[1];

/* --> uartLog_outputFxn */
extern xdc_Void uartLog_outputFxn(xdc_UArg,xdc_runtime_Log_EventRec*,xdc_Int);

/* --> xdc_runtime_LoggerCallback_defaultCreate */
extern xdc_UArg xdc_runtime_LoggerCallback_defaultCreate(xdc_UArg);


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3];

/* --> xdc_runtime_LoggerCallback_Module_startup__E */
extern xdc_Int xdc_runtime_LoggerCallback_Module_startup__E(xdc_Int);

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Mailbox_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Mailbox_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_cc26xx_Power_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_cc26xx_Power_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_cc26xx_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_cc26xx_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[11];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[11];


/*
 * ======== xdc.runtime.SysCallback DECLARATIONS ========
 */

/* --> xdc_runtime_SysCallback_defaultAbort */
extern xdc_Void xdc_runtime_SysCallback_defaultAbort(xdc_CString);

/* --> xdc_runtime_SysCallback_defaultExit */
extern xdc_Void xdc_runtime_SysCallback_defaultExit(xdc_Int);

/* --> xdc_runtime_SysCallback_defaultFlush */
extern xdc_Void xdc_runtime_SysCallback_defaultFlush(xdc_Void);

/* --> xdc_runtime_SysCallback_defaultPutch */
extern xdc_Void xdc_runtime_SysCallback_defaultPutch(xdc_Char);

/* --> xdc_runtime_SysCallback_defaultReady */
extern xdc_Bool xdc_runtime_SysCallback_defaultReady(xdc_Void);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[5954];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[4];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Types DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module_State_notifyQ__O, ".const:ti_sysbios_family_arm_cc26xx_Power_Module_State_notifyQ__O");
__FAR__ const xdc_SizeT ti_sysbios_family_arm_cc26xx_Power_Module_State_notifyQ__O = offsetof(ti_sysbios_family_arm_cc26xx_Power_Module_State__, Object_field_notifyQ);
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module_State_clockObj__O, ".const:ti_sysbios_family_arm_cc26xx_Power_Module_State_clockObj__O");
__FAR__ const xdc_SizeT ti_sysbios_family_arm_cc26xx_Power_Module_State_clockObj__O = offsetof(ti_sysbios_family_arm_cc26xx_Power_Module_State__, Object_field_clockObj);
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module_State_xoscClockObj__O, ".const:ti_sysbios_family_arm_cc26xx_Power_Module_State_xoscClockObj__O");
__FAR__ const xdc_SizeT ti_sysbios_family_arm_cc26xx_Power_Module_State_xoscClockObj__O = offsetof(ti_sysbios_family_arm_cc26xx_Power_Module_State__, Object_field_xoscClockObj);
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module_State_lfClockObj__O, ".const:ti_sysbios_family_arm_cc26xx_Power_Module_State_lfClockObj__O");
__FAR__ const xdc_SizeT ti_sysbios_family_arm_cc26xx_Power_Module_State_lfClockObj__O = offsetof(ti_sysbios_family_arm_cc26xx_Power_Module_State__, Object_field_lfClockObj);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_dataQue__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_dataQue__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_dataQue__O = offsetof(ti_sysbios_knl_Mailbox_Object__, Object_field_dataQue);
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_freeQue__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_freeQue__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_freeQue__O = offsetof(ti_sysbios_knl_Mailbox_Object__, Object_field_freeQue);
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_dataSem__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_dataSem__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_dataSem__O = offsetof(ti_sysbios_knl_Mailbox_Object__, Object_field_dataSem);
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_freeSem__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_freeSem__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_freeSem__O = offsetof(ti_sysbios_knl_Mailbox_Object__, Object_field_freeSem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/Users/SDRA/workspace_v6_2/ProjectZeroApp_CC2650LAUNCHXL/Debug/configPkg/package/cfg/appBLE_UartLog_pem3");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.simplelink");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M3");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== ti.platforms.simplelink.Platform TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_LoggerCallback_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool ti_sysbios_family_arm_cc26xx_Power_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}


xdc_Int xdc_runtime_Startup_getState__I(xdc_runtime_Types_ModuleId id) {
    switch (id) {
        case 11:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[1]);
        case 24:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[2]);
        case 28:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[3]);
        case 31:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[4]);
        case 32:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[5]);
        case 36:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[6]);
        case 41:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[8]);
        case 42:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[9]);
        case 43:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[10]);
    }
    return (0);
}

/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[11];
    xdc_runtime_Startup_startModsFxn__C(state, 11);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif

extern xdc_Void ti_sysbios_family_arm_cc26xx_Boot_trimDevice(void);  /* user defined reset function */
extern xdc_Void ti_sysbios_rom_cortexm_cc26xx_CC26xx_checkRevision__E(void);  /* user defined reset function */

/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
    ti_sysbios_family_arm_cc26xx_Boot_trimDevice();
    ti_sysbios_rom_cortexm_cc26xx_CC26xx_checkRevision__E();
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt, 
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_CString fmt = *pfmt;
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                                       (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (xdc_Int) va_arg(va, xdc_IArg) : 
                                       (xdc_Int) va_arg(va, xdc_Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[3];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.sysbios.rom.ROM TEMPLATE ========
 */



/*
 *  functions explicitly excluded from the ROM
 */
#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_start__E, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_start__E");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_start__E = (xdc_Void *)ti_sysbios_family_arm_cc26xx_Timer_start__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_initDevice__I, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_initDevice__I");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_initDevice__I = (xdc_Void *)ti_sysbios_family_arm_cc26xx_Timer_initDevice__I;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_setThreshold__I, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_setThreshold__I");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_setThreshold__I = (xdc_Void *)ti_sysbios_family_arm_cc26xx_Timer_setThreshold__I;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_setNextTick__E, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_setNextTick__E");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_setNextTick__E = (xdc_Void *)ti_sysbios_family_arm_cc26xx_Timer_setNextTick__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getMaxTicks__E, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getMaxTicks__E");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getMaxTicks__E = (xdc_Void *)ti_sysbios_family_arm_cc26xx_Timer_getMaxTicks__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getCount64__E, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getCount64__E");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getCount64__E = (xdc_Void *)ti_sysbios_family_arm_cc26xx_Timer_getCount64__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_dynamicStub__E, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_dynamicStub__E");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_dynamicStub__E = (xdc_Void *)ti_sysbios_family_arm_cc26xx_Timer_dynamicStub__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getCurrentTick__E, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getCurrentTick__E");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_Timer_getCurrentTick__E = (xdc_Void *)ti_sysbios_family_arm_cc26xx_Timer_getCurrentTick__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_TimestampProvider_get32__E, ".const:ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_TimestampProvider_get32__E");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_family_arm_cc26xx_TimestampProvider_get32__E = (xdc_Void *)ti_sysbios_family_arm_cc26xx_TimestampProvider_get32__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_ti_sysbios_knl_Clock_workFuncDynamic__E, ".const:ti_sysbios_rom_ROM_ti_sysbios_knl_Clock_workFuncDynamic__E");
xdc_Void * const ti_sysbios_rom_ROM_ti_sysbios_knl_Clock_workFuncDynamic__E = (xdc_Void *)ti_sysbios_knl_Clock_workFuncDynamic__E;

/*
 *  generated functions referenced from within the ROM
 */
#pragma DATA_SECTION(ti_sysbios_rom_ROM_xdc_runtime_Startup_getState__I, ".const:ti_sysbios_rom_ROM_xdc_runtime_Startup_getState__I");
xdc_Void * const ti_sysbios_rom_ROM_xdc_runtime_Startup_getState__I = (xdc_Void *)xdc_runtime_Startup_getState__I;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_Module__startupDone__S, ".const:ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_Module__startupDone__S");
xdc_Void * const ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_Module__startupDone__S = (xdc_Void *)xdc_runtime_System_SupportProxy_Module__startupDone__S;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_abort__E, ".const:ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_abort__E");
xdc_Void * const ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_abort__E = (xdc_Void *)xdc_runtime_System_SupportProxy_abort__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_exit__E, ".const:ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_exit__E");
xdc_Void * const ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_exit__E = (xdc_Void *)xdc_runtime_System_SupportProxy_exit__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_flush__E, ".const:ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_flush__E");
xdc_Void * const ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_flush__E = (xdc_Void *)xdc_runtime_System_SupportProxy_flush__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_putch__E, ".const:ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_putch__E");
xdc_Void * const ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_putch__E = (xdc_Void *)xdc_runtime_System_SupportProxy_putch__E;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_ready__E, ".const:ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_ready__E");
xdc_Void * const ti_sysbios_rom_ROM_xdc_runtime_System_SupportProxy_ready__E = (xdc_Void *)xdc_runtime_System_SupportProxy_ready__E;



/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */

Void ti_sysbios_BIOS_atExitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();
extern Void ti_sysbios_family_arm_cc26xx_Timer_startup__E();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_family_arm_cc26xx_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#if defined(__ti__)
#include <_lock.h>
#endif

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

#if defined(__ti__)
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
#endif
}
#if defined(__ti__)

/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I()
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}
#endif

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
#if defined(__ti__)
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();
#endif

    /* force thread type to 'Main' */
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
#if defined(__ti__)
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
#endif
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }

}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.CC26xx TEMPLATE ========
 */


#pragma DATA_SECTION(xdc_runtime_Error_Module__state__V, ".data:xdc_runtime_Error_Module__state__V");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__state__V, ".data:xdc_runtime_Memory_Module__state__V");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__state__V, ".data:xdc_runtime_Registry_Module__state__V");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__state__V, ".data:xdc_runtime_Startup_Module__state__V");
#pragma DATA_SECTION(xdc_runtime_System_Module__state__V, ".data:xdc_runtime_System_Module__state__V");
#pragma DATA_SECTION(xdc_runtime_Text_Module__state__V, ".data:xdc_runtime_Text_Module__state__V");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__state__V, ".data:ti_sysbios_BIOS_Module__state__V");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__state__V, ".data:ti_sysbios_knl_Clock_Module__state__V");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__state__V, ".data:ti_sysbios_knl_Swi_Module__state__V");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__state__V, ".data:ti_sysbios_knl_Task_Module__state__V");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__state__V, ".data:ti_sysbios_family_arm_m3_Hwi_Module__state__V");
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module__state__V, ".data:ti_sysbios_family_arm_cc26xx_Power_Module__state__V");
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__state__V, ".data:ti_sysbios_family_arm_cc26xx_Timer_Module__state__V");
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V, ".data:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V");

#pragma DATA_SECTION(ti_sysbios_rom_ROM_AONRTCChannelEnable, ".const:ti_sysbios_rom_ROM_AONRTCChannelEnable");
xdc_Void * const ti_sysbios_rom_ROM_AONRTCChannelEnable = (xdc_Void *)NULL;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_AONRTCCompareValueSet, ".const:ti_sysbios_rom_ROM_AONRTCCompareValueSet");
xdc_Void * const ti_sysbios_rom_ROM_AONRTCCompareValueSet = (xdc_Void *)NULL;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_AONRTCCurrentCompareValueGet, ".const:ti_sysbios_rom_ROM_AONRTCCurrentCompareValueGet");
xdc_Void * const ti_sysbios_rom_ROM_AONRTCCurrentCompareValueGet = (xdc_Void *)NULL;

#pragma DATA_SECTION(ti_sysbios_rom_ROM_AONRTCEventClear, ".const:ti_sysbios_rom_ROM_AONRTCEventClear");
xdc_Void * const ti_sysbios_rom_ROM_AONRTCEventClear = (xdc_Void *)NULL;



#define REVISION_WORD 0x1001ca98

Void ti_sysbios_rom_cortexm_cc26xx_CC26xx_badRomRevision__E() {
	/* Loop here forever if application is built with wrong version of ROM image */
        while(1) {
            ;
        }
}

Void ti_sysbios_rom_cortexm_cc26xx_CC26xx_checkRevision__E()
{
    if (*((UInt32 *)(REVISION_WORD)) != 0x20284770) {
	ti_sysbios_rom_cortexm_cc26xx_CC26xx_badRomRevision__E();
    }
}


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    ti_sysbios_knl_Clock_logTick__E();

    {
        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */



/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00();


#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
};

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ramVectors, ".vecs");

/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[50];

UInt32 ti_sysbios_family_arm_m3_Hwi_dispatchTable[50];

#if defined(__IAR_SYSTEMS_ICC__)
Void ti_sysbios_family_arm_m3_Hwi_initIsrStackSize()
{
    #pragma section = "CSTACK"
        ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackSize = (SizeT)__section_size("CSTACK");
}
#endif

/*
 * ======== ti.sysbios.family.arm.cc26xx.Boot TEMPLATE ========
 */


#include <inc/hw_types.h>


extern Void _c_int00();

Void ResetISR ()
{
    _c_int00();
}

/* workaround bug in driverlib */

/*
 * ======== ti.sysbios.family.arm.cc26xx.Power TEMPLATE ========
 */


#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/family/arm/cc26xx/Power.h>
#include <ti/sysbios/family/arm/cc26xx/PowerCC2650.h>

#include <inc/hw_types.h>
#include <inc/hw_memmap.h>
#include <inc/hw_rfc_pwr.h>
#include <driverlib/prcm.h>
#include <driverlib/osc.h>
#include <driverlib/sys_ctrl.h>
#include <driverlib/rfc.h>

/*
 *  Resource database records.  Each record contains:
 *    { flags, flags2 , driverlibID}
 *
 *  flags  = type : parent1
 *  flags2 = parent2
 */
const ti_sysbios_family_arm_cc26xx_Power_ResourceRecord
    ti_sysbios_family_arm_cc26xx_Power_db[RESOURCE_END] =
{
/*  type       parent1      parent2      driverlibID
    ----      ----------   --------- ------------------- */
 { PERIPH  | DOMAIN_PERIPH, NOPARENT, PRCM_PERIPH_TIMER0 },/* PERIPH_GPT0 */
 { PERIPH  | DOMAIN_PERIPH, NOPARENT, PRCM_PERIPH_TIMER1 },/* PERIPH_GPT1 */
 { PERIPH  | DOMAIN_PERIPH, NOPARENT, PRCM_PERIPH_TIMER2 },/* PERIPH_GPT2 */
 { PERIPH  | DOMAIN_PERIPH, NOPARENT, PRCM_PERIPH_TIMER3 },/* PERIPH_GPT3 */
 { PERIPH  | DOMAIN_SERIAL, NOPARENT, PRCM_PERIPH_SSI0 },  /* PERIPH_SSI0 */
 { PERIPH  | DOMAIN_PERIPH, NOPARENT, PRCM_PERIPH_SSI1 },  /* PERIPH_SSI1 */
 { PERIPH  | DOMAIN_SERIAL, NOPARENT, PRCM_PERIPH_UART0 }, /* PERIPH_UART0 */
 { PERIPH  | DOMAIN_SERIAL, NOPARENT, PRCM_PERIPH_I2C0 },  /* PERIPH_I2C0 */
 { PERIPH  | DOMAIN_PERIPH, NOPARENT, PRCM_PERIPH_TRNG },  /* PERIPH_TRNG */
 { PERIPH  | DOMAIN_PERIPH, NOPARENT, PRCM_PERIPH_GPIO },  /* PERIPH_GPIO */
 { PERIPH  | DOMAIN_PERIPH, DOMAIN_SYSBUS, PRCM_PERIPH_UDMA }, /* PERIPH_UDMA */
 { PERIPH  | DOMAIN_PERIPH, NOPARENT, PRCM_PERIPH_CRYPTO },/* PERIPH_CRYPTO */
 { PERIPH  | DOMAIN_PERIPH, NOPARENT, PRCM_PERIPH_I2S },   /* PERIPH_I2S */
 { SPECIAL | DOMAIN_RFCORE, NOPARENT, 0 },                 /* PERIPH_RFCORE */
 { SPECIAL | NOPARENT,      NOPARENT, 1 },                 /* XOSC_HF */
 { DOMAIN  | NOPARENT,      NOPARENT, PRCM_DOMAIN_PERIPH },/* DOMAIN_PERIPH */
 { DOMAIN  | NOPARENT,      NOPARENT, PRCM_DOMAIN_SERIAL },/* DOMAIN_SERIAL */
 { DOMAIN  | NOPARENT,      NOPARENT, PRCM_DOMAIN_RFCORE },/* DOMAIN_RFCORE */
 { SPECIAL | NOPARENT,      NOPARENT, 2 }                  /* DOMAIN_SYSBUS */
};

volatile UInt8 ti_sysbios_family_arm_cc26xx_Power_refCount[RESOURCE_END] =
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/* careful: bitmask values index to this array, be sure they are contiguous */
volatile UInt8 ti_sysbios_family_arm_cc26xx_Power_constraintCounts[
    ti_sysbios_family_arm_cc26xx_Power_NUMCONSTRAINTS] =
    { 0, 0, 0, 0, 0 };

extern struct ti_sysbios_family_arm_cc26xx_Power_Module_State__ ti_sysbios_family_arm_cc26xx_Power_Module__state__V;

/* special dependency functions */
UInt ti_sysbios_family_arm_cc26xx_Power_RFCORECLKS (UInt action);
UInt ti_sysbios_family_arm_cc26xx_Power_XOSC_HF (UInt action);
UInt ti_sysbios_family_arm_cc26xx_Power_NOP (UInt action);
Void ti_sysbios_family_arm_cc26xx_Power_XOSC_HF_clockFunc (UArg arg0);

/*
 *  ======== ti_sysbios_family_arm_cc26xx_Power_RFCORECLKS ========
 *
 */
UInt ti_sysbios_family_arm_cc26xx_Power_RFCORECLKS (UInt action)
{
    if (action == ENABLE) {
        RFCClockEnable();
    }
    else {
        RFCClockDisable();
    }
    return (0);
}

/*
 *  ======== ti_sysbios_family_arm_cc26xx_Power_XOSC_HF_clockFunc ========
 */
Void ti_sysbios_family_arm_cc26xx_Power_XOSC_HF_clockFunc(UArg arg0)
{
    Bool readyToCal;
    UInt32 timeout;
    UInt key;

    key = ti_sysbios_hal_Hwi_disable();

    /* if pending switch has already been made, just send out notifications */
    if (ti_sysbios_family_arm_cc26xx_Power_Module__state__V.xoscPending ==
        FALSE) {

        if (ti_sysbios_family_arm_cc26xx_Power_calibrateRCOSC) {
            /* initiate RCOSC calibration */
            readyToCal =
                ti_sysbios_family_arm_cc26xx_Power_initiateCalibration();
        }

        /* notify clients that were waiting for a switch notification */
        ti_sysbios_family_arm_cc26xx_Power_notify(
            ti_sysbios_family_arm_cc26xx_Power_XOSC_HF_SWITCHED);

        /* if ready to start first cal measurment, do it now */
        if (ti_sysbios_family_arm_cc26xx_Power_calibrateRCOSC) {
            if (readyToCal == TRUE) {
                ti_sysbios_family_arm_cc26xx_Power_startFirstMeasurement();
            }
        }
    }

    /* else, if HF ready to switch, do it now ... */
    else if (OSCHF_AttemptToSwitchToXosc()) {

        ti_sysbios_family_arm_cc26xx_Power_Module__state__V.xoscPending = FALSE;

        if (ti_sysbios_family_arm_cc26xx_Power_calibrateRCOSC) {
            /* initiate RCOSC calibration */
            readyToCal =
                ti_sysbios_family_arm_cc26xx_Power_initiateCalibration();
        }

        /* now notify clients that were waiting for a switch notification */
        ti_sysbios_family_arm_cc26xx_Power_notify(
            ti_sysbios_family_arm_cc26xx_Power_XOSC_HF_SWITCHED);

        /* if ready to start first cal measurment, do it now */
        if (ti_sysbios_family_arm_cc26xx_Power_calibrateRCOSC) {
            if (readyToCal == TRUE) {
                ti_sysbios_family_arm_cc26xx_Power_startFirstMeasurement();
            }
        }
    }

    /* else, wait some more, then see if can switch ... */
    else {
        /* calculate wait timeout in units of ticks */
        timeout = ti_sysbios_family_arm_cc26xx_Power_retryWaitXOSC_HF /
            ti_sysbios_knl_Clock_tickPeriod;
        if (timeout == 0) {
            timeout = 1;   /* wait at least 1 tick */
        }

        /* re-start Clock object with retry timeout */
        ti_sysbios_knl_Clock_setTimeout(
            ti_sysbios_family_arm_cc26xx_Power_Module_State_xoscClockObj(),
            timeout);
        ti_sysbios_knl_Clock_start(
            ti_sysbios_family_arm_cc26xx_Power_Module_State_xoscClockObj());
    }

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_sysbios_family_arm_cc26xx_Power_XOSC_HF ========
 */
UInt ti_sysbios_family_arm_cc26xx_Power_XOSC_HF (UInt action)
{
    UInt32 timeout;

    if (action == ENABLE) {
        if (OSCClockSourceGet(OSC_SRC_CLK_HF) != OSC_XOSC_HF) {
            OSCHF_TurnOnXosc();

            ti_sysbios_family_arm_cc26xx_Power_Module__state__V.xoscPending =
                TRUE;

            /* calculate wait timeout in units of ticks */
            timeout = ti_sysbios_family_arm_cc26xx_Power_initialWaitXOSC_HF /
                ti_sysbios_knl_Clock_tickPeriod;
            if (timeout == 0) {
                timeout = 1;   /* wait at least 1 tick */
            }

            /* start Clock object with initial timeout */
            ti_sysbios_knl_Clock_stop(
                ti_sysbios_family_arm_cc26xx_Power_Module_State_xoscClockObj());
            ti_sysbios_knl_Clock_setTimeout(
                ti_sysbios_family_arm_cc26xx_Power_Module_State_xoscClockObj(),
                timeout);
            ti_sysbios_knl_Clock_start(
                ti_sysbios_family_arm_cc26xx_Power_Module_State_xoscClockObj());
        }
    }

    /* when release XOSC_HF, auto switch to RCOSC_HF */
    else {
        OSCHF_SwitchToRcOscTurnOffXosc();
    }
    return (0);
}

/*
 *  ======== ti_sysbios_family_arm_cc26xx_Power_isDependencyActive ========
 */
Bool ti_sysbios_family_arm_cc26xx_Power_isDependencyActive (Power_Resource
    resourceID)
{
    Bool status = TRUE;

    /* check if the special XOSC_HF resource ...*/
    if(resourceID == XOSC_HF) {

        /* check to see if XOSC_HF is the active source */
        if(OSCClockSourceGet(OSC_SRC_CLK_HF) != OSC_XOSC_HF) {
            status = FALSE;
        }
    }

    /* else, all other resources ... */
    else {

       /* resource is active if dependency count != 0 */
        if(ti_sysbios_family_arm_cc26xx_Power_refCount[resourceID] == 0) {
            status = FALSE;
        }
    }

    return (status);
}

/*
 *  ======== ti_sysbios_family_arm_cc26xx_Power_NOP (UInt action) ========
 */
UInt ti_sysbios_family_arm_cc26xx_Power_NOP (UInt action)
{
    return (0);
}

Fxn ti_sysbios_family_arm_cc26xx_Power_resourceHandlers[3] =
{
    (Fxn) ti_sysbios_family_arm_cc26xx_Power_RFCORECLKS,
    (Fxn) ti_sysbios_family_arm_cc26xx_Power_XOSC_HF,
    (Fxn) ti_sysbios_family_arm_cc26xx_Power_NOP
};

/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */




#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = malloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x2dc6c00,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x15;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x2dc6c00,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x684;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)0);


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.cc26xx.Boot INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsEnabled ti_sysbios_family_arm_cc26xx_Boot_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsIncluded ti_sysbios_family_arm_cc26xx_Boot_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__id__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__id ti_sysbios_family_arm_cc26xx_Boot_Module__id__C = (xdc_Bits16)0x27;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerDefined ti_sysbios_family_arm_cc26xx_Boot_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__startupDoneFxn ti_sysbios_family_arm_cc26xx_Boot_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_cc26xx_Boot_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Object__count__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__count ti_sysbios_family_arm_cc26xx_Boot_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Object__heap__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__heap ti_sysbios_family_arm_cc26xx_Boot_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Object__sizeof__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__sizeof ti_sysbios_family_arm_cc26xx_Boot_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Boot_Object__table__C, ".const:ti_sysbios_family_arm_cc26xx_Boot_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__table ti_sysbios_family_arm_cc26xx_Boot_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.cc26xx.Power INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_cc26xx_Power_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_cc26xx_Power_Module_State__ ti_sysbios_family_arm_cc26xx_Power_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_cc26xx_Power_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_cc26xx_Power_Module_State__ ti_sysbios_family_arm_cc26xx_Power_Module__state__V = {
    (xdc_UInt32)0x0,  /* constraintsMask */
    ti_sysbios_family_arm_cc26xx_Power_ACTIVE,  /* state */
    0,  /* xoscPending */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_family_arm_cc26xx_Power_Module__state__V.Object_field_notifyQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_family_arm_cc26xx_Power_Module__state__V.Object_field_notifyQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_notifyQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_family_arm_cc26xx_Power_Module__state__V.Object_field_xoscClockObj.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
        (xdc_UInt32)0x0,  /* timeout */
        (xdc_UInt32)0x0,  /* currTimeout */
        (xdc_UInt32)0x0,  /* period */
        0,  /* active */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_cc26xx_Power_defaultClockFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg */
    },  /* Object_field_clockObj */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_family_arm_cc26xx_Power_Module__state__V.Object_field_lfClockObj.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_family_arm_cc26xx_Power_Module__state__V.Object_field_clockObj.elem)),  /* prev */
        },  /* elem */
        (xdc_UInt32)0x0,  /* timeout */
        (xdc_UInt32)0x0,  /* currTimeout */
        (xdc_UInt32)0x0,  /* period */
        0,  /* active */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_cc26xx_Power_XOSC_HF_clockFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg */
    },  /* Object_field_xoscClockObj */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_family_arm_cc26xx_Power_Module__state__V.Object_field_xoscClockObj.elem)),  /* prev */
        },  /* elem */
        (xdc_UInt32)0x2710,  /* timeout */
        (xdc_UInt32)0x2710,  /* currTimeout */
        (xdc_UInt32)0x0,  /* period */
        1,  /* active */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_cc26xx_Power_LF_clockFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg */
    },  /* Object_field_lfClockObj */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Module__diagsEnabled ti_sysbios_family_arm_cc26xx_Power_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Module__diagsIncluded ti_sysbios_family_arm_cc26xx_Power_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module__diagsMask__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Module__diagsMask ti_sysbios_family_arm_cc26xx_Power_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_cc26xx_Power_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module__gateObj__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Module__gateObj ti_sysbios_family_arm_cc26xx_Power_Module__gateObj__C = ((CT__ti_sysbios_family_arm_cc26xx_Power_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module__gatePrms__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Module__gatePrms ti_sysbios_family_arm_cc26xx_Power_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_cc26xx_Power_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module__id__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Module__id ti_sysbios_family_arm_cc26xx_Power_Module__id__C = (xdc_Bits16)0x28;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Module__loggerDefined ti_sysbios_family_arm_cc26xx_Power_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module__loggerObj__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Module__loggerObj ti_sysbios_family_arm_cc26xx_Power_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_cc26xx_Power_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn0 ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn1 ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn2 ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn4 ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn8 ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_cc26xx_Power_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Module__startupDoneFxn ti_sysbios_family_arm_cc26xx_Power_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_cc26xx_Power_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Object__count__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Object__count ti_sysbios_family_arm_cc26xx_Power_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Object__heap__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Object__heap ti_sysbios_family_arm_cc26xx_Power_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Object__sizeof__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Object__sizeof ti_sysbios_family_arm_cc26xx_Power_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_Object__table__C, ".const:ti_sysbios_family_arm_cc26xx_Power_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_Object__table ti_sysbios_family_arm_cc26xx_Power_Object__table__C = 0;

/* idle__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_idle__C, ".const:ti_sysbios_family_arm_cc26xx_Power_idle__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_idle ti_sysbios_family_arm_cc26xx_Power_idle__C = 1;

/* A_tooManyCallsReleaseConstraint__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_A_tooManyCallsReleaseConstraint__C, ".const:ti_sysbios_family_arm_cc26xx_Power_A_tooManyCallsReleaseConstraint__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_A_tooManyCallsReleaseConstraint ti_sysbios_family_arm_cc26xx_Power_A_tooManyCallsReleaseConstraint__C = (((xdc_runtime_Assert_Id)1833) << 16 | 16);

/* A_tooManyCallsReleaseDependency__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_A_tooManyCallsReleaseDependency__C, ".const:ti_sysbios_family_arm_cc26xx_Power_A_tooManyCallsReleaseDependency__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_A_tooManyCallsReleaseDependency ti_sysbios_family_arm_cc26xx_Power_A_tooManyCallsReleaseDependency__C = (((xdc_runtime_Assert_Id)1935) << 16 | 16);

/* resumeTicksSTANDBY__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_resumeTicksSTANDBY__C, ".const:ti_sysbios_family_arm_cc26xx_Power_resumeTicksSTANDBY__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_resumeTicksSTANDBY ti_sysbios_family_arm_cc26xx_Power_resumeTicksSTANDBY__C = (xdc_UInt)0x4b;

/* totalTicksSTANDBY__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_totalTicksSTANDBY__C, ".const:ti_sysbios_family_arm_cc26xx_Power_totalTicksSTANDBY__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_totalTicksSTANDBY ti_sysbios_family_arm_cc26xx_Power_totalTicksSTANDBY__C = (xdc_UInt)0x64;

/* wakeDelaySTANDBY__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_wakeDelaySTANDBY__C, ".const:ti_sysbios_family_arm_cc26xx_Power_wakeDelaySTANDBY__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_wakeDelaySTANDBY ti_sysbios_family_arm_cc26xx_Power_wakeDelaySTANDBY__C = (xdc_UInt)0x82;

/* initialWaitXOSC_HF__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_initialWaitXOSC_HF__C, ".const:ti_sysbios_family_arm_cc26xx_Power_initialWaitXOSC_HF__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_initialWaitXOSC_HF ti_sysbios_family_arm_cc26xx_Power_initialWaitXOSC_HF__C = (xdc_UInt)0x32;

/* retryWaitXOSC_HF__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_retryWaitXOSC_HF__C, ".const:ti_sysbios_family_arm_cc26xx_Power_retryWaitXOSC_HF__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_retryWaitXOSC_HF ti_sysbios_family_arm_cc26xx_Power_retryWaitXOSC_HF__C = (xdc_UInt)0x32;

/* calibrateRCOSC__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_calibrateRCOSC__C, ".const:ti_sysbios_family_arm_cc26xx_Power_calibrateRCOSC__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_calibrateRCOSC ti_sysbios_family_arm_cc26xx_Power_calibrateRCOSC__C = 1;

/* clockFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_clockFunc__C, ".const:ti_sysbios_family_arm_cc26xx_Power_clockFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_clockFunc ti_sysbios_family_arm_cc26xx_Power_clockFunc__C = ((CT__ti_sysbios_family_arm_cc26xx_Power_clockFunc)((xdc_Fxn)ti_sysbios_family_arm_cc26xx_Power_defaultClockFunc__E));

/* lfClockFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_lfClockFunc__C, ".const:ti_sysbios_family_arm_cc26xx_Power_lfClockFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_lfClockFunc ti_sysbios_family_arm_cc26xx_Power_lfClockFunc__C = ((CT__ti_sysbios_family_arm_cc26xx_Power_lfClockFunc)((xdc_Fxn)ti_sysbios_family_arm_cc26xx_Power_LF_clockFunc__E));

/* xoscClockFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_xoscClockFunc__C, ".const:ti_sysbios_family_arm_cc26xx_Power_xoscClockFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_xoscClockFunc ti_sysbios_family_arm_cc26xx_Power_xoscClockFunc__C = ((CT__ti_sysbios_family_arm_cc26xx_Power_xoscClockFunc)((xdc_Fxn)ti_sysbios_family_arm_cc26xx_Power_XOSC_HF_clockFunc__E));

/* notifyTrapFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Power_notifyTrapFunc__C, ".const:ti_sysbios_family_arm_cc26xx_Power_notifyTrapFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Power_notifyTrapFunc ti_sysbios_family_arm_cc26xx_Power_notifyTrapFunc__C = ((CT__ti_sysbios_family_arm_cc26xx_Power_notifyTrapFunc)((xdc_Fxn)ti_sysbios_family_arm_cc26xx_Power_defaultNotifyTrapFunc__E));


/*
 * ======== ti.sysbios.family.arm.cc26xx.Timer INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_cc26xx_Timer_Params ti_sysbios_family_arm_cc26xx_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_cc26xx_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_cc26xx_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_cc26xx_Timer_Module__ ti_sysbios_family_arm_cc26xx_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_cc26xx_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_cc26xx_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_cc26xx_Timer_Object__ ti_sysbios_family_arm_cc26xx_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt32)0xa7c5,  /* period */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x10000,  /* lo */
        },  /* frequency */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* hwi */
        (xdc_UInt64)0xa7c5,  /* period64 */
        (xdc_UInt64)0x0,  /* savedCurrCount */
        (xdc_UInt64)0xa7c5,  /* prevThreshold */
        (xdc_UInt64)0xa7c5,  /* nextThreshold */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_cc26xx_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_cc26xx_Timer_Module_State__ ti_sysbios_family_arm_cc26xx_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_cc26xx_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_cc26xx_Timer_Module_State__ ti_sysbios_family_arm_cc26xx_Timer_Module__state__V = {
    (xdc_UInt)0x0,  /* availMask */
    (ti_sysbios_family_arm_cc26xx_Timer_Handle)&ti_sysbios_family_arm_cc26xx_Timer_Object__table__V[0],  /* handle */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsEnabled ti_sysbios_family_arm_cc26xx_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsIncluded ti_sysbios_family_arm_cc26xx_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__id__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__id ti_sysbios_family_arm_cc26xx_Timer_Module__id__C = (xdc_Bits16)0x29;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerDefined ti_sysbios_family_arm_cc26xx_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__startupDoneFxn ti_sysbios_family_arm_cc26xx_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Object__count__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__count ti_sysbios_family_arm_cc26xx_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__heap ti_sysbios_family_arm_cc26xx_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__sizeof ti_sysbios_family_arm_cc26xx_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_cc26xx_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Object__table__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__table ti_sysbios_family_arm_cc26xx_Timer_Object__table__C = ti_sysbios_family_arm_cc26xx_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_E_invalidTimer ti_sysbios_family_arm_cc26xx_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4340) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_E_notAvailable ti_sysbios_family_arm_cc26xx_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4376) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_E_cannotSupport ti_sysbios_family_arm_cc26xx_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4415) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_anyMask__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_anyMask ti_sysbios_family_arm_cc26xx_Timer_anyMask__C = (xdc_UInt)0x1;

/* funcHookCH1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1 ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1)0);

/* funcHookCH2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2 ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2__C = ((CT__ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2)0);

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_startupNeeded ti_sysbios_family_arm_cc26xx_Timer_startupNeeded__C = (xdc_UInt)0x1;


/*
 * ======== ti.sysbios.family.arm.cc26xx.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_State__ ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_State__ ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V = {
    0,  /* timer */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__id ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__id__C = (xdc_Bits16)0x2a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__count ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__heap ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__sizeof ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__table ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__table__C = 0;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_timerId__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_timerId__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_timerId ti_sysbios_family_arm_cc26xx_TimestampProvider_timerId__C = (xdc_UInt)0x0;

/* useClockTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_TimestampProvider_useClockTimer__C, ".const:ti_sysbios_family_arm_cc26xx_TimestampProvider_useClockTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_useClockTimer ti_sysbios_family_arm_cc26xx_TimestampProvider_useClockTimer__C = 1;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_cc26xx_Power_auxISR__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x2c,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_cc26xx_Timer_dynamicStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x14,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)0),  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    (xdc_SizeT)0x400,  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    ((xdc_Ptr)((void*)&ti_sysbios_family_arm_m3_Hwi_dispatchTable[0])),  /* dispatchTable */
    0,  /* vnvicFlushRequired */
    ((void*)0),  /* intAffinity */
    ((void*)0),  /* intAffinityMasks */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A");
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x24;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0x32;

/* NUM_PRIORITIES__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)5811) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)5881) << 16 | 512);

/* A_unsupportedMaskingOption__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)1780) << 16 | 16);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)3854) << 16 | 0);

/* E_hwiLimitExceeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C = (((xdc_runtime_Error_Id)3902) << 16 | 0);

/* E_exception__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)3950) << 16 | 0);

/* E_noIsr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)4155) << 16 | 0);

/* E_NMI__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)4183) << 16 | 0);

/* E_hardFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)4193) << 16 | 0);

/* E_memFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)4209) << 16 | 0);

/* E_busFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)4239) << 16 | 0);

/* E_usageFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)4269) << 16 | 0);

/* E_svCall__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)4286) << 16 | 0);

/* E_debugMon__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)4307) << 16 | 0);

/* E_reserved__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)4322) << 16 | 0);

/* nullIsrFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I));

/* excHandlerFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)((xdc_Fxn)exceptionHandler));

/* excHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)0);

/* excHookFuncs__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0;

/* numSparseInterrupts__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C, ".const:ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C = (xdc_UInt)0x0;

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x25;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x26;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x2f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x30;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)3190) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x2b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4473) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[1664];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x680)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x2d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2487) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)2523) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)2568) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4558) << 16 | 0);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2459) << 16 | 16);

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_arm_cc26xx_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_family_arm_cc26xx_Power_Module__state__V.Object_field_clockObj.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_family_arm_cc26xx_Power_Module__state__V.Object_field_lfClockObj.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x18;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)4866) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)4888) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)4906) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)481) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_DYNAMIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0xa;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((CT__ti_sysbios_knl_Clock_doTickFunc)((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I));


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((CT__ti_sysbios_knl_Event_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((CT__ti_sysbios_knl_Event_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((CT__ti_sysbios_knl_Event_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x1b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((CT__ti_sysbios_knl_Event_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Event_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__startupDoneFxn ti_sysbios_knl_Event_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Event_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)4938) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)4992) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)551) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)598) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)637) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)680) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)743) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)uartLog_flush)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_cc26xx_Power_standbyPolicy__E)),  /* [1] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2] = {
    (xdc_UInt)0x0,  /* [0] */
    (xdc_UInt)0x0,  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x19;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {2, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {2, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x1a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__PARAMS__C, ".const:ti_sysbios_knl_Mailbox_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Mailbox_Params ti_sysbios_knl_Mailbox_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Mailbox_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Mailbox_Object__PARAMS__C.__iprms, /* instance */
    0,  /* heap */
    0,  /* readerEvent */
    (xdc_UInt)0x1,  /* readerEventId */
    0,  /* writerEvent */
    (xdc_UInt)0x1,  /* writerEventId */
    ((xdc_Ptr)0),  /* buf */
    (xdc_UInt)0x0,  /* bufSize */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Mailbox_Module__ ti_sysbios_knl_Mailbox_Module__root__V = {
    {&ti_sysbios_knl_Mailbox_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Mailbox_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Mailbox_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsEnabled ti_sysbios_knl_Mailbox_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Mailbox_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsIncluded ti_sysbios_knl_Mailbox_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__diagsMask__C, ".const:ti_sysbios_knl_Mailbox_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsMask ti_sysbios_knl_Mailbox_Module__diagsMask__C = ((CT__ti_sysbios_knl_Mailbox_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__gateObj__C, ".const:ti_sysbios_knl_Mailbox_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__gateObj ti_sysbios_knl_Mailbox_Module__gateObj__C = ((CT__ti_sysbios_knl_Mailbox_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__gatePrms__C, ".const:ti_sysbios_knl_Mailbox_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__gatePrms ti_sysbios_knl_Mailbox_Module__gatePrms__C = ((CT__ti_sysbios_knl_Mailbox_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__id__C, ".const:ti_sysbios_knl_Mailbox_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__id ti_sysbios_knl_Mailbox_Module__id__C = (xdc_Bits16)0x1c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerDefined__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerDefined ti_sysbios_knl_Mailbox_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerObj__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerObj ti_sysbios_knl_Mailbox_Module__loggerObj__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn0 ti_sysbios_knl_Mailbox_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn1 ti_sysbios_knl_Mailbox_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn2 ti_sysbios_knl_Mailbox_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn4 ti_sysbios_knl_Mailbox_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn8 ti_sysbios_knl_Mailbox_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Mailbox_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__startupDoneFxn ti_sysbios_knl_Mailbox_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Mailbox_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__count__C, ".const:ti_sysbios_knl_Mailbox_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__count ti_sysbios_knl_Mailbox_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__heap__C, ".const:ti_sysbios_knl_Mailbox_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__heap ti_sysbios_knl_Mailbox_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__sizeof__C, ".const:ti_sysbios_knl_Mailbox_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__sizeof ti_sysbios_knl_Mailbox_Object__sizeof__C = sizeof(ti_sysbios_knl_Mailbox_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__table__C, ".const:ti_sysbios_knl_Mailbox_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__table ti_sysbios_knl_Mailbox_Object__table__C = 0;

/* A_invalidBufSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_A_invalidBufSize__C, ".const:ti_sysbios_knl_Mailbox_A_invalidBufSize__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_A_invalidBufSize ti_sysbios_knl_Mailbox_A_invalidBufSize__C = (((xdc_runtime_Assert_Id)833) << 16 | 16);

/* maxTypeAlign__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_maxTypeAlign__C, ".const:ti_sysbios_knl_Mailbox_maxTypeAlign__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_maxTypeAlign ti_sysbios_knl_Mailbox_maxTypeAlign__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x1d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x1e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)5073) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5103) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)891) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)946) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)680) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1011) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1065) << 16 | 16);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 0;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFuncDynamic__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0x5,  /* priority */
        (xdc_UInt)0x20,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x1f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5146) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5193) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5211) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1159) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1216) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x6;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */


/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[6] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x20;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5251) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5319) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5364) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5405) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5437) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5485) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5541) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5572) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)5655) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)5741) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)3729) << 16 | 0);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3772) << 16 | 0);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)3823) << 16 | 0);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1265) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1334) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1388) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1442) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1505) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1555) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1590) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1623) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1707) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x6;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x200;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 0;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.CC26xx INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsEnabled__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsEnabled ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsIncluded__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsIncluded ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsMask__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsMask ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsMask__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gateObj__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gateObj ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gateObj__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gatePrms__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gatePrms ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gatePrms__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__id__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__id__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__id ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__id__C = (xdc_Bits16)0x17;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerDefined__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerDefined ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerObj__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerObj ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerObj__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn0__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn0 ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn0__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn1__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn1 ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn1__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn2__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn2 ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn2__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn4__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn4 ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn4__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn8__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn8 ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn8__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__startupDoneFxn__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__startupDoneFxn ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__startupDoneFxn__C = ((CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__count__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__count__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__count ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__heap__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__heap__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__heap ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__sizeof__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__sizeof ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__table__C, ".const:ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__table__C");
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__table ti_sysbios_rom_cortexm_cc26xx_CC26xx_Object__table__C = 0;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x1;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3489) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x2;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x3;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x4;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)0);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x5;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((CT__xdc_runtime_Error_policyFxn)((xdc_Fxn)xdc_runtime_Error_policySpin__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3511) << 16 | 0);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3515) << 16 | 0);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3549) << 16 | 0);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x2;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x6;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x7;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)4636) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)4660) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)4681) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)4700) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)4717) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)4747) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)4779) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)4808) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)4819) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)4829) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)4848) << 16 | 32768);


/*
 * ======== xdc.runtime.LoggerCallback INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerCallback_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Object__PARAMS__C, ".const:xdc_runtime_LoggerCallback_Object__PARAMS__C");
__FAR__ const xdc_runtime_LoggerCallback_Params xdc_runtime_LoggerCallback_Object__PARAMS__C = {
    sizeof (xdc_runtime_LoggerCallback_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_LoggerCallback_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_LoggerCallback_Module__ xdc_runtime_LoggerCallback_Module__root__V = {
    {&xdc_runtime_LoggerCallback_Module__root__V.link,  /* link.next */
    &xdc_runtime_LoggerCallback_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
xdc_runtime_LoggerCallback_Object__ xdc_runtime_LoggerCallback_Object__table__V[1] = {
    {/* instance#0 */
        &xdc_runtime_LoggerCallback_Module__FXNS__C,
        1,  /* enabled */
        ((xdc_UArg)(0x0)),  /* context */
        ((xdc_UArg)(0x1)),  /* arg */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__diagsEnabled__C, ".const:xdc_runtime_LoggerCallback_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__diagsEnabled xdc_runtime_LoggerCallback_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__diagsIncluded__C, ".const:xdc_runtime_LoggerCallback_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__diagsIncluded xdc_runtime_LoggerCallback_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__diagsMask__C, ".const:xdc_runtime_LoggerCallback_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__diagsMask xdc_runtime_LoggerCallback_Module__diagsMask__C = ((CT__xdc_runtime_LoggerCallback_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__gateObj__C, ".const:xdc_runtime_LoggerCallback_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__gateObj xdc_runtime_LoggerCallback_Module__gateObj__C = ((CT__xdc_runtime_LoggerCallback_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__gatePrms__C, ".const:xdc_runtime_LoggerCallback_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__gatePrms xdc_runtime_LoggerCallback_Module__gatePrms__C = ((CT__xdc_runtime_LoggerCallback_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__id__C, ".const:xdc_runtime_LoggerCallback_Module__id__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__id xdc_runtime_LoggerCallback_Module__id__C = (xdc_Bits16)0x8;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__loggerDefined__C, ".const:xdc_runtime_LoggerCallback_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerDefined xdc_runtime_LoggerCallback_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__loggerObj__C, ".const:xdc_runtime_LoggerCallback_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerObj xdc_runtime_LoggerCallback_Module__loggerObj__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__loggerFxn0__C, ".const:xdc_runtime_LoggerCallback_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerFxn0 xdc_runtime_LoggerCallback_Module__loggerFxn0__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__loggerFxn1__C, ".const:xdc_runtime_LoggerCallback_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerFxn1 xdc_runtime_LoggerCallback_Module__loggerFxn1__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__loggerFxn2__C, ".const:xdc_runtime_LoggerCallback_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerFxn2 xdc_runtime_LoggerCallback_Module__loggerFxn2__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__loggerFxn4__C, ".const:xdc_runtime_LoggerCallback_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerFxn4 xdc_runtime_LoggerCallback_Module__loggerFxn4__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__loggerFxn8__C, ".const:xdc_runtime_LoggerCallback_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerFxn8 xdc_runtime_LoggerCallback_Module__loggerFxn8__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Module__startupDoneFxn__C, ".const:xdc_runtime_LoggerCallback_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__startupDoneFxn xdc_runtime_LoggerCallback_Module__startupDoneFxn__C = ((CT__xdc_runtime_LoggerCallback_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Object__count__C, ".const:xdc_runtime_LoggerCallback_Object__count__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Object__count xdc_runtime_LoggerCallback_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Object__heap__C, ".const:xdc_runtime_LoggerCallback_Object__heap__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Object__heap xdc_runtime_LoggerCallback_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Object__sizeof__C, ".const:xdc_runtime_LoggerCallback_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Object__sizeof xdc_runtime_LoggerCallback_Object__sizeof__C = sizeof(xdc_runtime_LoggerCallback_Object__);

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Object__table__C, ".const:xdc_runtime_LoggerCallback_Object__table__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_Object__table xdc_runtime_LoggerCallback_Object__table__C = xdc_runtime_LoggerCallback_Object__table__V;

/* outputFxn__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_outputFxn__C, ".const:xdc_runtime_LoggerCallback_outputFxn__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_outputFxn xdc_runtime_LoggerCallback_outputFxn__C = ((CT__xdc_runtime_LoggerCallback_outputFxn)((xdc_Fxn)uartLog_outputFxn));

/* createInstFxn__C */
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_createInstFxn__C, ".const:xdc_runtime_LoggerCallback_createInstFxn__C");
__FAR__ const CT__xdc_runtime_LoggerCallback_createInstFxn xdc_runtime_LoggerCallback_createInstFxn__C = ((CT__xdc_runtime_LoggerCallback_createInstFxn)((xdc_Fxn)xdc_runtime_LoggerCallback_defaultCreate));


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x6180;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x6180;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x80;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x9;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [2] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[11] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_LoggerCallback_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Mailbox_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_cc26xx_Power_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_cc26xx_Timer_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [10] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[11] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    1,  /* [9] */
    0,  /* [10] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0xa;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {3, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {0, 0};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysCallback INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__diagsEnabled__C, ".const:xdc_runtime_SysCallback_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__diagsEnabled xdc_runtime_SysCallback_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__diagsIncluded__C, ".const:xdc_runtime_SysCallback_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__diagsIncluded xdc_runtime_SysCallback_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__diagsMask__C, ".const:xdc_runtime_SysCallback_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__diagsMask xdc_runtime_SysCallback_Module__diagsMask__C = ((CT__xdc_runtime_SysCallback_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__gateObj__C, ".const:xdc_runtime_SysCallback_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__gateObj xdc_runtime_SysCallback_Module__gateObj__C = ((CT__xdc_runtime_SysCallback_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__gatePrms__C, ".const:xdc_runtime_SysCallback_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__gatePrms xdc_runtime_SysCallback_Module__gatePrms__C = ((CT__xdc_runtime_SysCallback_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__id__C, ".const:xdc_runtime_SysCallback_Module__id__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__id xdc_runtime_SysCallback_Module__id__C = (xdc_Bits16)0xc;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerDefined__C, ".const:xdc_runtime_SysCallback_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerDefined xdc_runtime_SysCallback_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerObj__C, ".const:xdc_runtime_SysCallback_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerObj xdc_runtime_SysCallback_Module__loggerObj__C = ((CT__xdc_runtime_SysCallback_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn0__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn0 xdc_runtime_SysCallback_Module__loggerFxn0__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn1__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn1 xdc_runtime_SysCallback_Module__loggerFxn1__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn2__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn2 xdc_runtime_SysCallback_Module__loggerFxn2__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn4__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn4 xdc_runtime_SysCallback_Module__loggerFxn4__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn8__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn8 xdc_runtime_SysCallback_Module__loggerFxn8__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__startupDoneFxn__C, ".const:xdc_runtime_SysCallback_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__startupDoneFxn xdc_runtime_SysCallback_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysCallback_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Object__count__C, ".const:xdc_runtime_SysCallback_Object__count__C");
__FAR__ const CT__xdc_runtime_SysCallback_Object__count xdc_runtime_SysCallback_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Object__heap__C, ".const:xdc_runtime_SysCallback_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysCallback_Object__heap xdc_runtime_SysCallback_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Object__sizeof__C, ".const:xdc_runtime_SysCallback_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysCallback_Object__sizeof xdc_runtime_SysCallback_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Object__table__C, ".const:xdc_runtime_SysCallback_Object__table__C");
__FAR__ const CT__xdc_runtime_SysCallback_Object__table xdc_runtime_SysCallback_Object__table__C = 0;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_abortFxn__C, ".const:xdc_runtime_SysCallback_abortFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_abortFxn xdc_runtime_SysCallback_abortFxn__C = ((CT__xdc_runtime_SysCallback_abortFxn)((xdc_Fxn)xdc_runtime_SysCallback_defaultAbort));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_exitFxn__C, ".const:xdc_runtime_SysCallback_exitFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_exitFxn xdc_runtime_SysCallback_exitFxn__C = ((CT__xdc_runtime_SysCallback_exitFxn)((xdc_Fxn)xdc_runtime_SysCallback_defaultExit));

/* flushFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_flushFxn__C, ".const:xdc_runtime_SysCallback_flushFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_flushFxn xdc_runtime_SysCallback_flushFxn__C = ((CT__xdc_runtime_SysCallback_flushFxn)((xdc_Fxn)xdc_runtime_SysCallback_defaultFlush));

/* putchFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_putchFxn__C, ".const:xdc_runtime_SysCallback_putchFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_putchFxn xdc_runtime_SysCallback_putchFxn__C = ((CT__xdc_runtime_SysCallback_putchFxn)((xdc_Fxn)xdc_runtime_SysCallback_defaultPutch));

/* readyFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_readyFxn__C, ".const:xdc_runtime_SysCallback_readyFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_readyFxn xdc_runtime_SysCallback_readyFxn__C = ((CT__xdc_runtime_SysCallback_readyFxn)((xdc_Fxn)xdc_runtime_SysCallback_defaultReady));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)0),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0xb;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x0;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((CT__xdc_runtime_System_abortFxn)((xdc_Fxn)xdc_runtime_System_abortSpin__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((CT__xdc_runtime_System_exitFxn)((xdc_Fxn)xdc_runtime_System_exitSpin__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[5954] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x63,  /* [402] */
    (xdc_Char)0x6c,  /* [403] */
    (xdc_Char)0x6f,  /* [404] */
    (xdc_Char)0x63,  /* [405] */
    (xdc_Char)0x6b,  /* [406] */
    (xdc_Char)0x44,  /* [407] */
    (xdc_Char)0x69,  /* [408] */
    (xdc_Char)0x73,  /* [409] */
    (xdc_Char)0x61,  /* [410] */
    (xdc_Char)0x62,  /* [411] */
    (xdc_Char)0x6c,  /* [412] */
    (xdc_Char)0x65,  /* [413] */
    (xdc_Char)0x64,  /* [414] */
    (xdc_Char)0x3a,  /* [415] */
    (xdc_Char)0x20,  /* [416] */
    (xdc_Char)0x43,  /* [417] */
    (xdc_Char)0x61,  /* [418] */
    (xdc_Char)0x6e,  /* [419] */
    (xdc_Char)0x6e,  /* [420] */
    (xdc_Char)0x6f,  /* [421] */
    (xdc_Char)0x74,  /* [422] */
    (xdc_Char)0x20,  /* [423] */
    (xdc_Char)0x63,  /* [424] */
    (xdc_Char)0x72,  /* [425] */
    (xdc_Char)0x65,  /* [426] */
    (xdc_Char)0x61,  /* [427] */
    (xdc_Char)0x74,  /* [428] */
    (xdc_Char)0x65,  /* [429] */
    (xdc_Char)0x20,  /* [430] */
    (xdc_Char)0x61,  /* [431] */
    (xdc_Char)0x20,  /* [432] */
    (xdc_Char)0x63,  /* [433] */
    (xdc_Char)0x6c,  /* [434] */
    (xdc_Char)0x6f,  /* [435] */
    (xdc_Char)0x63,  /* [436] */
    (xdc_Char)0x6b,  /* [437] */
    (xdc_Char)0x20,  /* [438] */
    (xdc_Char)0x69,  /* [439] */
    (xdc_Char)0x6e,  /* [440] */
    (xdc_Char)0x73,  /* [441] */
    (xdc_Char)0x74,  /* [442] */
    (xdc_Char)0x61,  /* [443] */
    (xdc_Char)0x6e,  /* [444] */
    (xdc_Char)0x63,  /* [445] */
    (xdc_Char)0x65,  /* [446] */
    (xdc_Char)0x20,  /* [447] */
    (xdc_Char)0x77,  /* [448] */
    (xdc_Char)0x68,  /* [449] */
    (xdc_Char)0x65,  /* [450] */
    (xdc_Char)0x6e,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x42,  /* [453] */
    (xdc_Char)0x49,  /* [454] */
    (xdc_Char)0x4f,  /* [455] */
    (xdc_Char)0x53,  /* [456] */
    (xdc_Char)0x2e,  /* [457] */
    (xdc_Char)0x63,  /* [458] */
    (xdc_Char)0x6c,  /* [459] */
    (xdc_Char)0x6f,  /* [460] */
    (xdc_Char)0x63,  /* [461] */
    (xdc_Char)0x6b,  /* [462] */
    (xdc_Char)0x45,  /* [463] */
    (xdc_Char)0x6e,  /* [464] */
    (xdc_Char)0x61,  /* [465] */
    (xdc_Char)0x62,  /* [466] */
    (xdc_Char)0x6c,  /* [467] */
    (xdc_Char)0x65,  /* [468] */
    (xdc_Char)0x64,  /* [469] */
    (xdc_Char)0x20,  /* [470] */
    (xdc_Char)0x69,  /* [471] */
    (xdc_Char)0x73,  /* [472] */
    (xdc_Char)0x20,  /* [473] */
    (xdc_Char)0x66,  /* [474] */
    (xdc_Char)0x61,  /* [475] */
    (xdc_Char)0x6c,  /* [476] */
    (xdc_Char)0x73,  /* [477] */
    (xdc_Char)0x65,  /* [478] */
    (xdc_Char)0x2e,  /* [479] */
    (xdc_Char)0x0,  /* [480] */
    (xdc_Char)0x41,  /* [481] */
    (xdc_Char)0x5f,  /* [482] */
    (xdc_Char)0x62,  /* [483] */
    (xdc_Char)0x61,  /* [484] */
    (xdc_Char)0x64,  /* [485] */
    (xdc_Char)0x54,  /* [486] */
    (xdc_Char)0x68,  /* [487] */
    (xdc_Char)0x72,  /* [488] */
    (xdc_Char)0x65,  /* [489] */
    (xdc_Char)0x61,  /* [490] */
    (xdc_Char)0x64,  /* [491] */
    (xdc_Char)0x54,  /* [492] */
    (xdc_Char)0x79,  /* [493] */
    (xdc_Char)0x70,  /* [494] */
    (xdc_Char)0x65,  /* [495] */
    (xdc_Char)0x3a,  /* [496] */
    (xdc_Char)0x20,  /* [497] */
    (xdc_Char)0x43,  /* [498] */
    (xdc_Char)0x61,  /* [499] */
    (xdc_Char)0x6e,  /* [500] */
    (xdc_Char)0x6e,  /* [501] */
    (xdc_Char)0x6f,  /* [502] */
    (xdc_Char)0x74,  /* [503] */
    (xdc_Char)0x20,  /* [504] */
    (xdc_Char)0x63,  /* [505] */
    (xdc_Char)0x72,  /* [506] */
    (xdc_Char)0x65,  /* [507] */
    (xdc_Char)0x61,  /* [508] */
    (xdc_Char)0x74,  /* [509] */
    (xdc_Char)0x65,  /* [510] */
    (xdc_Char)0x2f,  /* [511] */
    (xdc_Char)0x64,  /* [512] */
    (xdc_Char)0x65,  /* [513] */
    (xdc_Char)0x6c,  /* [514] */
    (xdc_Char)0x65,  /* [515] */
    (xdc_Char)0x74,  /* [516] */
    (xdc_Char)0x65,  /* [517] */
    (xdc_Char)0x20,  /* [518] */
    (xdc_Char)0x61,  /* [519] */
    (xdc_Char)0x20,  /* [520] */
    (xdc_Char)0x43,  /* [521] */
    (xdc_Char)0x6c,  /* [522] */
    (xdc_Char)0x6f,  /* [523] */
    (xdc_Char)0x63,  /* [524] */
    (xdc_Char)0x6b,  /* [525] */
    (xdc_Char)0x20,  /* [526] */
    (xdc_Char)0x66,  /* [527] */
    (xdc_Char)0x72,  /* [528] */
    (xdc_Char)0x6f,  /* [529] */
    (xdc_Char)0x6d,  /* [530] */
    (xdc_Char)0x20,  /* [531] */
    (xdc_Char)0x48,  /* [532] */
    (xdc_Char)0x77,  /* [533] */
    (xdc_Char)0x69,  /* [534] */
    (xdc_Char)0x20,  /* [535] */
    (xdc_Char)0x6f,  /* [536] */
    (xdc_Char)0x72,  /* [537] */
    (xdc_Char)0x20,  /* [538] */
    (xdc_Char)0x53,  /* [539] */
    (xdc_Char)0x77,  /* [540] */
    (xdc_Char)0x69,  /* [541] */
    (xdc_Char)0x20,  /* [542] */
    (xdc_Char)0x74,  /* [543] */
    (xdc_Char)0x68,  /* [544] */
    (xdc_Char)0x72,  /* [545] */
    (xdc_Char)0x65,  /* [546] */
    (xdc_Char)0x61,  /* [547] */
    (xdc_Char)0x64,  /* [548] */
    (xdc_Char)0x2e,  /* [549] */
    (xdc_Char)0x0,  /* [550] */
    (xdc_Char)0x41,  /* [551] */
    (xdc_Char)0x5f,  /* [552] */
    (xdc_Char)0x6e,  /* [553] */
    (xdc_Char)0x75,  /* [554] */
    (xdc_Char)0x6c,  /* [555] */
    (xdc_Char)0x6c,  /* [556] */
    (xdc_Char)0x45,  /* [557] */
    (xdc_Char)0x76,  /* [558] */
    (xdc_Char)0x65,  /* [559] */
    (xdc_Char)0x6e,  /* [560] */
    (xdc_Char)0x74,  /* [561] */
    (xdc_Char)0x4d,  /* [562] */
    (xdc_Char)0x61,  /* [563] */
    (xdc_Char)0x73,  /* [564] */
    (xdc_Char)0x6b,  /* [565] */
    (xdc_Char)0x73,  /* [566] */
    (xdc_Char)0x3a,  /* [567] */
    (xdc_Char)0x20,  /* [568] */
    (xdc_Char)0x6f,  /* [569] */
    (xdc_Char)0x72,  /* [570] */
    (xdc_Char)0x4d,  /* [571] */
    (xdc_Char)0x61,  /* [572] */
    (xdc_Char)0x73,  /* [573] */
    (xdc_Char)0x6b,  /* [574] */
    (xdc_Char)0x20,  /* [575] */
    (xdc_Char)0x61,  /* [576] */
    (xdc_Char)0x6e,  /* [577] */
    (xdc_Char)0x64,  /* [578] */
    (xdc_Char)0x20,  /* [579] */
    (xdc_Char)0x61,  /* [580] */
    (xdc_Char)0x6e,  /* [581] */
    (xdc_Char)0x64,  /* [582] */
    (xdc_Char)0x4d,  /* [583] */
    (xdc_Char)0x61,  /* [584] */
    (xdc_Char)0x73,  /* [585] */
    (xdc_Char)0x6b,  /* [586] */
    (xdc_Char)0x20,  /* [587] */
    (xdc_Char)0x61,  /* [588] */
    (xdc_Char)0x72,  /* [589] */
    (xdc_Char)0x65,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x6e,  /* [592] */
    (xdc_Char)0x75,  /* [593] */
    (xdc_Char)0x6c,  /* [594] */
    (xdc_Char)0x6c,  /* [595] */
    (xdc_Char)0x2e,  /* [596] */
    (xdc_Char)0x0,  /* [597] */
    (xdc_Char)0x41,  /* [598] */
    (xdc_Char)0x5f,  /* [599] */
    (xdc_Char)0x6e,  /* [600] */
    (xdc_Char)0x75,  /* [601] */
    (xdc_Char)0x6c,  /* [602] */
    (xdc_Char)0x6c,  /* [603] */
    (xdc_Char)0x45,  /* [604] */
    (xdc_Char)0x76,  /* [605] */
    (xdc_Char)0x65,  /* [606] */
    (xdc_Char)0x6e,  /* [607] */
    (xdc_Char)0x74,  /* [608] */
    (xdc_Char)0x49,  /* [609] */
    (xdc_Char)0x64,  /* [610] */
    (xdc_Char)0x3a,  /* [611] */
    (xdc_Char)0x20,  /* [612] */
    (xdc_Char)0x70,  /* [613] */
    (xdc_Char)0x6f,  /* [614] */
    (xdc_Char)0x73,  /* [615] */
    (xdc_Char)0x74,  /* [616] */
    (xdc_Char)0x65,  /* [617] */
    (xdc_Char)0x64,  /* [618] */
    (xdc_Char)0x20,  /* [619] */
    (xdc_Char)0x65,  /* [620] */
    (xdc_Char)0x76,  /* [621] */
    (xdc_Char)0x65,  /* [622] */
    (xdc_Char)0x6e,  /* [623] */
    (xdc_Char)0x74,  /* [624] */
    (xdc_Char)0x49,  /* [625] */
    (xdc_Char)0x64,  /* [626] */
    (xdc_Char)0x20,  /* [627] */
    (xdc_Char)0x69,  /* [628] */
    (xdc_Char)0x73,  /* [629] */
    (xdc_Char)0x20,  /* [630] */
    (xdc_Char)0x6e,  /* [631] */
    (xdc_Char)0x75,  /* [632] */
    (xdc_Char)0x6c,  /* [633] */
    (xdc_Char)0x6c,  /* [634] */
    (xdc_Char)0x2e,  /* [635] */
    (xdc_Char)0x0,  /* [636] */
    (xdc_Char)0x41,  /* [637] */
    (xdc_Char)0x5f,  /* [638] */
    (xdc_Char)0x65,  /* [639] */
    (xdc_Char)0x76,  /* [640] */
    (xdc_Char)0x65,  /* [641] */
    (xdc_Char)0x6e,  /* [642] */
    (xdc_Char)0x74,  /* [643] */
    (xdc_Char)0x49,  /* [644] */
    (xdc_Char)0x6e,  /* [645] */
    (xdc_Char)0x55,  /* [646] */
    (xdc_Char)0x73,  /* [647] */
    (xdc_Char)0x65,  /* [648] */
    (xdc_Char)0x3a,  /* [649] */
    (xdc_Char)0x20,  /* [650] */
    (xdc_Char)0x45,  /* [651] */
    (xdc_Char)0x76,  /* [652] */
    (xdc_Char)0x65,  /* [653] */
    (xdc_Char)0x6e,  /* [654] */
    (xdc_Char)0x74,  /* [655] */
    (xdc_Char)0x20,  /* [656] */
    (xdc_Char)0x6f,  /* [657] */
    (xdc_Char)0x62,  /* [658] */
    (xdc_Char)0x6a,  /* [659] */
    (xdc_Char)0x65,  /* [660] */
    (xdc_Char)0x63,  /* [661] */
    (xdc_Char)0x74,  /* [662] */
    (xdc_Char)0x20,  /* [663] */
    (xdc_Char)0x61,  /* [664] */
    (xdc_Char)0x6c,  /* [665] */
    (xdc_Char)0x72,  /* [666] */
    (xdc_Char)0x65,  /* [667] */
    (xdc_Char)0x61,  /* [668] */
    (xdc_Char)0x64,  /* [669] */
    (xdc_Char)0x79,  /* [670] */
    (xdc_Char)0x20,  /* [671] */
    (xdc_Char)0x69,  /* [672] */
    (xdc_Char)0x6e,  /* [673] */
    (xdc_Char)0x20,  /* [674] */
    (xdc_Char)0x75,  /* [675] */
    (xdc_Char)0x73,  /* [676] */
    (xdc_Char)0x65,  /* [677] */
    (xdc_Char)0x2e,  /* [678] */
    (xdc_Char)0x0,  /* [679] */
    (xdc_Char)0x41,  /* [680] */
    (xdc_Char)0x5f,  /* [681] */
    (xdc_Char)0x62,  /* [682] */
    (xdc_Char)0x61,  /* [683] */
    (xdc_Char)0x64,  /* [684] */
    (xdc_Char)0x43,  /* [685] */
    (xdc_Char)0x6f,  /* [686] */
    (xdc_Char)0x6e,  /* [687] */
    (xdc_Char)0x74,  /* [688] */
    (xdc_Char)0x65,  /* [689] */
    (xdc_Char)0x78,  /* [690] */
    (xdc_Char)0x74,  /* [691] */
    (xdc_Char)0x3a,  /* [692] */
    (xdc_Char)0x20,  /* [693] */
    (xdc_Char)0x62,  /* [694] */
    (xdc_Char)0x61,  /* [695] */
    (xdc_Char)0x64,  /* [696] */
    (xdc_Char)0x20,  /* [697] */
    (xdc_Char)0x63,  /* [698] */
    (xdc_Char)0x61,  /* [699] */
    (xdc_Char)0x6c,  /* [700] */
    (xdc_Char)0x6c,  /* [701] */
    (xdc_Char)0x69,  /* [702] */
    (xdc_Char)0x6e,  /* [703] */
    (xdc_Char)0x67,  /* [704] */
    (xdc_Char)0x20,  /* [705] */
    (xdc_Char)0x63,  /* [706] */
    (xdc_Char)0x6f,  /* [707] */
    (xdc_Char)0x6e,  /* [708] */
    (xdc_Char)0x74,  /* [709] */
    (xdc_Char)0x65,  /* [710] */
    (xdc_Char)0x78,  /* [711] */
    (xdc_Char)0x74,  /* [712] */
    (xdc_Char)0x2e,  /* [713] */
    (xdc_Char)0x20,  /* [714] */
    (xdc_Char)0x4d,  /* [715] */
    (xdc_Char)0x75,  /* [716] */
    (xdc_Char)0x73,  /* [717] */
    (xdc_Char)0x74,  /* [718] */
    (xdc_Char)0x20,  /* [719] */
    (xdc_Char)0x62,  /* [720] */
    (xdc_Char)0x65,  /* [721] */
    (xdc_Char)0x20,  /* [722] */
    (xdc_Char)0x63,  /* [723] */
    (xdc_Char)0x61,  /* [724] */
    (xdc_Char)0x6c,  /* [725] */
    (xdc_Char)0x6c,  /* [726] */
    (xdc_Char)0x65,  /* [727] */
    (xdc_Char)0x64,  /* [728] */
    (xdc_Char)0x20,  /* [729] */
    (xdc_Char)0x66,  /* [730] */
    (xdc_Char)0x72,  /* [731] */
    (xdc_Char)0x6f,  /* [732] */
    (xdc_Char)0x6d,  /* [733] */
    (xdc_Char)0x20,  /* [734] */
    (xdc_Char)0x61,  /* [735] */
    (xdc_Char)0x20,  /* [736] */
    (xdc_Char)0x54,  /* [737] */
    (xdc_Char)0x61,  /* [738] */
    (xdc_Char)0x73,  /* [739] */
    (xdc_Char)0x6b,  /* [740] */
    (xdc_Char)0x2e,  /* [741] */
    (xdc_Char)0x0,  /* [742] */
    (xdc_Char)0x41,  /* [743] */
    (xdc_Char)0x5f,  /* [744] */
    (xdc_Char)0x70,  /* [745] */
    (xdc_Char)0x65,  /* [746] */
    (xdc_Char)0x6e,  /* [747] */
    (xdc_Char)0x64,  /* [748] */
    (xdc_Char)0x54,  /* [749] */
    (xdc_Char)0x61,  /* [750] */
    (xdc_Char)0x73,  /* [751] */
    (xdc_Char)0x6b,  /* [752] */
    (xdc_Char)0x44,  /* [753] */
    (xdc_Char)0x69,  /* [754] */
    (xdc_Char)0x73,  /* [755] */
    (xdc_Char)0x61,  /* [756] */
    (xdc_Char)0x62,  /* [757] */
    (xdc_Char)0x6c,  /* [758] */
    (xdc_Char)0x65,  /* [759] */
    (xdc_Char)0x64,  /* [760] */
    (xdc_Char)0x3a,  /* [761] */
    (xdc_Char)0x20,  /* [762] */
    (xdc_Char)0x43,  /* [763] */
    (xdc_Char)0x61,  /* [764] */
    (xdc_Char)0x6e,  /* [765] */
    (xdc_Char)0x6e,  /* [766] */
    (xdc_Char)0x6f,  /* [767] */
    (xdc_Char)0x74,  /* [768] */
    (xdc_Char)0x20,  /* [769] */
    (xdc_Char)0x63,  /* [770] */
    (xdc_Char)0x61,  /* [771] */
    (xdc_Char)0x6c,  /* [772] */
    (xdc_Char)0x6c,  /* [773] */
    (xdc_Char)0x20,  /* [774] */
    (xdc_Char)0x45,  /* [775] */
    (xdc_Char)0x76,  /* [776] */
    (xdc_Char)0x65,  /* [777] */
    (xdc_Char)0x6e,  /* [778] */
    (xdc_Char)0x74,  /* [779] */
    (xdc_Char)0x5f,  /* [780] */
    (xdc_Char)0x70,  /* [781] */
    (xdc_Char)0x65,  /* [782] */
    (xdc_Char)0x6e,  /* [783] */
    (xdc_Char)0x64,  /* [784] */
    (xdc_Char)0x28,  /* [785] */
    (xdc_Char)0x29,  /* [786] */
    (xdc_Char)0x20,  /* [787] */
    (xdc_Char)0x77,  /* [788] */
    (xdc_Char)0x68,  /* [789] */
    (xdc_Char)0x69,  /* [790] */
    (xdc_Char)0x6c,  /* [791] */
    (xdc_Char)0x65,  /* [792] */
    (xdc_Char)0x20,  /* [793] */
    (xdc_Char)0x74,  /* [794] */
    (xdc_Char)0x68,  /* [795] */
    (xdc_Char)0x65,  /* [796] */
    (xdc_Char)0x20,  /* [797] */
    (xdc_Char)0x54,  /* [798] */
    (xdc_Char)0x61,  /* [799] */
    (xdc_Char)0x73,  /* [800] */
    (xdc_Char)0x6b,  /* [801] */
    (xdc_Char)0x20,  /* [802] */
    (xdc_Char)0x6f,  /* [803] */
    (xdc_Char)0x72,  /* [804] */
    (xdc_Char)0x20,  /* [805] */
    (xdc_Char)0x53,  /* [806] */
    (xdc_Char)0x77,  /* [807] */
    (xdc_Char)0x69,  /* [808] */
    (xdc_Char)0x20,  /* [809] */
    (xdc_Char)0x73,  /* [810] */
    (xdc_Char)0x63,  /* [811] */
    (xdc_Char)0x68,  /* [812] */
    (xdc_Char)0x65,  /* [813] */
    (xdc_Char)0x64,  /* [814] */
    (xdc_Char)0x75,  /* [815] */
    (xdc_Char)0x6c,  /* [816] */
    (xdc_Char)0x65,  /* [817] */
    (xdc_Char)0x72,  /* [818] */
    (xdc_Char)0x20,  /* [819] */
    (xdc_Char)0x69,  /* [820] */
    (xdc_Char)0x73,  /* [821] */
    (xdc_Char)0x20,  /* [822] */
    (xdc_Char)0x64,  /* [823] */
    (xdc_Char)0x69,  /* [824] */
    (xdc_Char)0x73,  /* [825] */
    (xdc_Char)0x61,  /* [826] */
    (xdc_Char)0x62,  /* [827] */
    (xdc_Char)0x6c,  /* [828] */
    (xdc_Char)0x65,  /* [829] */
    (xdc_Char)0x64,  /* [830] */
    (xdc_Char)0x2e,  /* [831] */
    (xdc_Char)0x0,  /* [832] */
    (xdc_Char)0x4d,  /* [833] */
    (xdc_Char)0x61,  /* [834] */
    (xdc_Char)0x69,  /* [835] */
    (xdc_Char)0x6c,  /* [836] */
    (xdc_Char)0x62,  /* [837] */
    (xdc_Char)0x6f,  /* [838] */
    (xdc_Char)0x78,  /* [839] */
    (xdc_Char)0x5f,  /* [840] */
    (xdc_Char)0x63,  /* [841] */
    (xdc_Char)0x72,  /* [842] */
    (xdc_Char)0x65,  /* [843] */
    (xdc_Char)0x61,  /* [844] */
    (xdc_Char)0x74,  /* [845] */
    (xdc_Char)0x65,  /* [846] */
    (xdc_Char)0x27,  /* [847] */
    (xdc_Char)0x73,  /* [848] */
    (xdc_Char)0x20,  /* [849] */
    (xdc_Char)0x62,  /* [850] */
    (xdc_Char)0x75,  /* [851] */
    (xdc_Char)0x66,  /* [852] */
    (xdc_Char)0x53,  /* [853] */
    (xdc_Char)0x69,  /* [854] */
    (xdc_Char)0x7a,  /* [855] */
    (xdc_Char)0x65,  /* [856] */
    (xdc_Char)0x20,  /* [857] */
    (xdc_Char)0x70,  /* [858] */
    (xdc_Char)0x61,  /* [859] */
    (xdc_Char)0x72,  /* [860] */
    (xdc_Char)0x61,  /* [861] */
    (xdc_Char)0x6d,  /* [862] */
    (xdc_Char)0x65,  /* [863] */
    (xdc_Char)0x74,  /* [864] */
    (xdc_Char)0x65,  /* [865] */
    (xdc_Char)0x72,  /* [866] */
    (xdc_Char)0x20,  /* [867] */
    (xdc_Char)0x69,  /* [868] */
    (xdc_Char)0x73,  /* [869] */
    (xdc_Char)0x20,  /* [870] */
    (xdc_Char)0x69,  /* [871] */
    (xdc_Char)0x6e,  /* [872] */
    (xdc_Char)0x76,  /* [873] */
    (xdc_Char)0x61,  /* [874] */
    (xdc_Char)0x6c,  /* [875] */
    (xdc_Char)0x69,  /* [876] */
    (xdc_Char)0x64,  /* [877] */
    (xdc_Char)0x20,  /* [878] */
    (xdc_Char)0x28,  /* [879] */
    (xdc_Char)0x74,  /* [880] */
    (xdc_Char)0x6f,  /* [881] */
    (xdc_Char)0x6f,  /* [882] */
    (xdc_Char)0x20,  /* [883] */
    (xdc_Char)0x73,  /* [884] */
    (xdc_Char)0x6d,  /* [885] */
    (xdc_Char)0x61,  /* [886] */
    (xdc_Char)0x6c,  /* [887] */
    (xdc_Char)0x6c,  /* [888] */
    (xdc_Char)0x29,  /* [889] */
    (xdc_Char)0x0,  /* [890] */
    (xdc_Char)0x41,  /* [891] */
    (xdc_Char)0x5f,  /* [892] */
    (xdc_Char)0x6e,  /* [893] */
    (xdc_Char)0x6f,  /* [894] */
    (xdc_Char)0x45,  /* [895] */
    (xdc_Char)0x76,  /* [896] */
    (xdc_Char)0x65,  /* [897] */
    (xdc_Char)0x6e,  /* [898] */
    (xdc_Char)0x74,  /* [899] */
    (xdc_Char)0x73,  /* [900] */
    (xdc_Char)0x3a,  /* [901] */
    (xdc_Char)0x20,  /* [902] */
    (xdc_Char)0x54,  /* [903] */
    (xdc_Char)0x68,  /* [904] */
    (xdc_Char)0x65,  /* [905] */
    (xdc_Char)0x20,  /* [906] */
    (xdc_Char)0x45,  /* [907] */
    (xdc_Char)0x76,  /* [908] */
    (xdc_Char)0x65,  /* [909] */
    (xdc_Char)0x6e,  /* [910] */
    (xdc_Char)0x74,  /* [911] */
    (xdc_Char)0x2e,  /* [912] */
    (xdc_Char)0x73,  /* [913] */
    (xdc_Char)0x75,  /* [914] */
    (xdc_Char)0x70,  /* [915] */
    (xdc_Char)0x70,  /* [916] */
    (xdc_Char)0x6f,  /* [917] */
    (xdc_Char)0x72,  /* [918] */
    (xdc_Char)0x74,  /* [919] */
    (xdc_Char)0x73,  /* [920] */
    (xdc_Char)0x45,  /* [921] */
    (xdc_Char)0x76,  /* [922] */
    (xdc_Char)0x65,  /* [923] */
    (xdc_Char)0x6e,  /* [924] */
    (xdc_Char)0x74,  /* [925] */
    (xdc_Char)0x73,  /* [926] */
    (xdc_Char)0x20,  /* [927] */
    (xdc_Char)0x66,  /* [928] */
    (xdc_Char)0x6c,  /* [929] */
    (xdc_Char)0x61,  /* [930] */
    (xdc_Char)0x67,  /* [931] */
    (xdc_Char)0x20,  /* [932] */
    (xdc_Char)0x69,  /* [933] */
    (xdc_Char)0x73,  /* [934] */
    (xdc_Char)0x20,  /* [935] */
    (xdc_Char)0x64,  /* [936] */
    (xdc_Char)0x69,  /* [937] */
    (xdc_Char)0x73,  /* [938] */
    (xdc_Char)0x61,  /* [939] */
    (xdc_Char)0x62,  /* [940] */
    (xdc_Char)0x6c,  /* [941] */
    (xdc_Char)0x65,  /* [942] */
    (xdc_Char)0x64,  /* [943] */
    (xdc_Char)0x2e,  /* [944] */
    (xdc_Char)0x0,  /* [945] */
    (xdc_Char)0x41,  /* [946] */
    (xdc_Char)0x5f,  /* [947] */
    (xdc_Char)0x69,  /* [948] */
    (xdc_Char)0x6e,  /* [949] */
    (xdc_Char)0x76,  /* [950] */
    (xdc_Char)0x54,  /* [951] */
    (xdc_Char)0x69,  /* [952] */
    (xdc_Char)0x6d,  /* [953] */
    (xdc_Char)0x65,  /* [954] */
    (xdc_Char)0x6f,  /* [955] */
    (xdc_Char)0x75,  /* [956] */
    (xdc_Char)0x74,  /* [957] */
    (xdc_Char)0x3a,  /* [958] */
    (xdc_Char)0x20,  /* [959] */
    (xdc_Char)0x43,  /* [960] */
    (xdc_Char)0x61,  /* [961] */
    (xdc_Char)0x6e,  /* [962] */
    (xdc_Char)0x27,  /* [963] */
    (xdc_Char)0x74,  /* [964] */
    (xdc_Char)0x20,  /* [965] */
    (xdc_Char)0x75,  /* [966] */
    (xdc_Char)0x73,  /* [967] */
    (xdc_Char)0x65,  /* [968] */
    (xdc_Char)0x20,  /* [969] */
    (xdc_Char)0x42,  /* [970] */
    (xdc_Char)0x49,  /* [971] */
    (xdc_Char)0x4f,  /* [972] */
    (xdc_Char)0x53,  /* [973] */
    (xdc_Char)0x5f,  /* [974] */
    (xdc_Char)0x45,  /* [975] */
    (xdc_Char)0x56,  /* [976] */
    (xdc_Char)0x45,  /* [977] */
    (xdc_Char)0x4e,  /* [978] */
    (xdc_Char)0x54,  /* [979] */
    (xdc_Char)0x5f,  /* [980] */
    (xdc_Char)0x41,  /* [981] */
    (xdc_Char)0x43,  /* [982] */
    (xdc_Char)0x51,  /* [983] */
    (xdc_Char)0x55,  /* [984] */
    (xdc_Char)0x49,  /* [985] */
    (xdc_Char)0x52,  /* [986] */
    (xdc_Char)0x45,  /* [987] */
    (xdc_Char)0x44,  /* [988] */
    (xdc_Char)0x20,  /* [989] */
    (xdc_Char)0x77,  /* [990] */
    (xdc_Char)0x69,  /* [991] */
    (xdc_Char)0x74,  /* [992] */
    (xdc_Char)0x68,  /* [993] */
    (xdc_Char)0x20,  /* [994] */
    (xdc_Char)0x74,  /* [995] */
    (xdc_Char)0x68,  /* [996] */
    (xdc_Char)0x69,  /* [997] */
    (xdc_Char)0x73,  /* [998] */
    (xdc_Char)0x20,  /* [999] */
    (xdc_Char)0x53,  /* [1000] */
    (xdc_Char)0x65,  /* [1001] */
    (xdc_Char)0x6d,  /* [1002] */
    (xdc_Char)0x61,  /* [1003] */
    (xdc_Char)0x70,  /* [1004] */
    (xdc_Char)0x68,  /* [1005] */
    (xdc_Char)0x6f,  /* [1006] */
    (xdc_Char)0x72,  /* [1007] */
    (xdc_Char)0x65,  /* [1008] */
    (xdc_Char)0x2e,  /* [1009] */
    (xdc_Char)0x0,  /* [1010] */
    (xdc_Char)0x41,  /* [1011] */
    (xdc_Char)0x5f,  /* [1012] */
    (xdc_Char)0x6f,  /* [1013] */
    (xdc_Char)0x76,  /* [1014] */
    (xdc_Char)0x65,  /* [1015] */
    (xdc_Char)0x72,  /* [1016] */
    (xdc_Char)0x66,  /* [1017] */
    (xdc_Char)0x6c,  /* [1018] */
    (xdc_Char)0x6f,  /* [1019] */
    (xdc_Char)0x77,  /* [1020] */
    (xdc_Char)0x3a,  /* [1021] */
    (xdc_Char)0x20,  /* [1022] */
    (xdc_Char)0x43,  /* [1023] */
    (xdc_Char)0x6f,  /* [1024] */
    (xdc_Char)0x75,  /* [1025] */
    (xdc_Char)0x6e,  /* [1026] */
    (xdc_Char)0x74,  /* [1027] */
    (xdc_Char)0x20,  /* [1028] */
    (xdc_Char)0x68,  /* [1029] */
    (xdc_Char)0x61,  /* [1030] */
    (xdc_Char)0x73,  /* [1031] */
    (xdc_Char)0x20,  /* [1032] */
    (xdc_Char)0x65,  /* [1033] */
    (xdc_Char)0x78,  /* [1034] */
    (xdc_Char)0x63,  /* [1035] */
    (xdc_Char)0x65,  /* [1036] */
    (xdc_Char)0x65,  /* [1037] */
    (xdc_Char)0x64,  /* [1038] */
    (xdc_Char)0x65,  /* [1039] */
    (xdc_Char)0x64,  /* [1040] */
    (xdc_Char)0x20,  /* [1041] */
    (xdc_Char)0x36,  /* [1042] */
    (xdc_Char)0x35,  /* [1043] */
    (xdc_Char)0x35,  /* [1044] */
    (xdc_Char)0x33,  /* [1045] */
    (xdc_Char)0x35,  /* [1046] */
    (xdc_Char)0x20,  /* [1047] */
    (xdc_Char)0x61,  /* [1048] */
    (xdc_Char)0x6e,  /* [1049] */
    (xdc_Char)0x64,  /* [1050] */
    (xdc_Char)0x20,  /* [1051] */
    (xdc_Char)0x72,  /* [1052] */
    (xdc_Char)0x6f,  /* [1053] */
    (xdc_Char)0x6c,  /* [1054] */
    (xdc_Char)0x6c,  /* [1055] */
    (xdc_Char)0x65,  /* [1056] */
    (xdc_Char)0x64,  /* [1057] */
    (xdc_Char)0x20,  /* [1058] */
    (xdc_Char)0x6f,  /* [1059] */
    (xdc_Char)0x76,  /* [1060] */
    (xdc_Char)0x65,  /* [1061] */
    (xdc_Char)0x72,  /* [1062] */
    (xdc_Char)0x2e,  /* [1063] */
    (xdc_Char)0x0,  /* [1064] */
    (xdc_Char)0x41,  /* [1065] */
    (xdc_Char)0x5f,  /* [1066] */
    (xdc_Char)0x70,  /* [1067] */
    (xdc_Char)0x65,  /* [1068] */
    (xdc_Char)0x6e,  /* [1069] */
    (xdc_Char)0x64,  /* [1070] */
    (xdc_Char)0x54,  /* [1071] */
    (xdc_Char)0x61,  /* [1072] */
    (xdc_Char)0x73,  /* [1073] */
    (xdc_Char)0x6b,  /* [1074] */
    (xdc_Char)0x44,  /* [1075] */
    (xdc_Char)0x69,  /* [1076] */
    (xdc_Char)0x73,  /* [1077] */
    (xdc_Char)0x61,  /* [1078] */
    (xdc_Char)0x62,  /* [1079] */
    (xdc_Char)0x6c,  /* [1080] */
    (xdc_Char)0x65,  /* [1081] */
    (xdc_Char)0x64,  /* [1082] */
    (xdc_Char)0x3a,  /* [1083] */
    (xdc_Char)0x20,  /* [1084] */
    (xdc_Char)0x43,  /* [1085] */
    (xdc_Char)0x61,  /* [1086] */
    (xdc_Char)0x6e,  /* [1087] */
    (xdc_Char)0x6e,  /* [1088] */
    (xdc_Char)0x6f,  /* [1089] */
    (xdc_Char)0x74,  /* [1090] */
    (xdc_Char)0x20,  /* [1091] */
    (xdc_Char)0x63,  /* [1092] */
    (xdc_Char)0x61,  /* [1093] */
    (xdc_Char)0x6c,  /* [1094] */
    (xdc_Char)0x6c,  /* [1095] */
    (xdc_Char)0x20,  /* [1096] */
    (xdc_Char)0x53,  /* [1097] */
    (xdc_Char)0x65,  /* [1098] */
    (xdc_Char)0x6d,  /* [1099] */
    (xdc_Char)0x61,  /* [1100] */
    (xdc_Char)0x70,  /* [1101] */
    (xdc_Char)0x68,  /* [1102] */
    (xdc_Char)0x6f,  /* [1103] */
    (xdc_Char)0x72,  /* [1104] */
    (xdc_Char)0x65,  /* [1105] */
    (xdc_Char)0x5f,  /* [1106] */
    (xdc_Char)0x70,  /* [1107] */
    (xdc_Char)0x65,  /* [1108] */
    (xdc_Char)0x6e,  /* [1109] */
    (xdc_Char)0x64,  /* [1110] */
    (xdc_Char)0x28,  /* [1111] */
    (xdc_Char)0x29,  /* [1112] */
    (xdc_Char)0x20,  /* [1113] */
    (xdc_Char)0x77,  /* [1114] */
    (xdc_Char)0x68,  /* [1115] */
    (xdc_Char)0x69,  /* [1116] */
    (xdc_Char)0x6c,  /* [1117] */
    (xdc_Char)0x65,  /* [1118] */
    (xdc_Char)0x20,  /* [1119] */
    (xdc_Char)0x74,  /* [1120] */
    (xdc_Char)0x68,  /* [1121] */
    (xdc_Char)0x65,  /* [1122] */
    (xdc_Char)0x20,  /* [1123] */
    (xdc_Char)0x54,  /* [1124] */
    (xdc_Char)0x61,  /* [1125] */
    (xdc_Char)0x73,  /* [1126] */
    (xdc_Char)0x6b,  /* [1127] */
    (xdc_Char)0x20,  /* [1128] */
    (xdc_Char)0x6f,  /* [1129] */
    (xdc_Char)0x72,  /* [1130] */
    (xdc_Char)0x20,  /* [1131] */
    (xdc_Char)0x53,  /* [1132] */
    (xdc_Char)0x77,  /* [1133] */
    (xdc_Char)0x69,  /* [1134] */
    (xdc_Char)0x20,  /* [1135] */
    (xdc_Char)0x73,  /* [1136] */
    (xdc_Char)0x63,  /* [1137] */
    (xdc_Char)0x68,  /* [1138] */
    (xdc_Char)0x65,  /* [1139] */
    (xdc_Char)0x64,  /* [1140] */
    (xdc_Char)0x75,  /* [1141] */
    (xdc_Char)0x6c,  /* [1142] */
    (xdc_Char)0x65,  /* [1143] */
    (xdc_Char)0x72,  /* [1144] */
    (xdc_Char)0x20,  /* [1145] */
    (xdc_Char)0x69,  /* [1146] */
    (xdc_Char)0x73,  /* [1147] */
    (xdc_Char)0x20,  /* [1148] */
    (xdc_Char)0x64,  /* [1149] */
    (xdc_Char)0x69,  /* [1150] */
    (xdc_Char)0x73,  /* [1151] */
    (xdc_Char)0x61,  /* [1152] */
    (xdc_Char)0x62,  /* [1153] */
    (xdc_Char)0x6c,  /* [1154] */
    (xdc_Char)0x65,  /* [1155] */
    (xdc_Char)0x64,  /* [1156] */
    (xdc_Char)0x2e,  /* [1157] */
    (xdc_Char)0x0,  /* [1158] */
    (xdc_Char)0x41,  /* [1159] */
    (xdc_Char)0x5f,  /* [1160] */
    (xdc_Char)0x73,  /* [1161] */
    (xdc_Char)0x77,  /* [1162] */
    (xdc_Char)0x69,  /* [1163] */
    (xdc_Char)0x44,  /* [1164] */
    (xdc_Char)0x69,  /* [1165] */
    (xdc_Char)0x73,  /* [1166] */
    (xdc_Char)0x61,  /* [1167] */
    (xdc_Char)0x62,  /* [1168] */
    (xdc_Char)0x6c,  /* [1169] */
    (xdc_Char)0x65,  /* [1170] */
    (xdc_Char)0x64,  /* [1171] */
    (xdc_Char)0x3a,  /* [1172] */
    (xdc_Char)0x20,  /* [1173] */
    (xdc_Char)0x43,  /* [1174] */
    (xdc_Char)0x61,  /* [1175] */
    (xdc_Char)0x6e,  /* [1176] */
    (xdc_Char)0x6e,  /* [1177] */
    (xdc_Char)0x6f,  /* [1178] */
    (xdc_Char)0x74,  /* [1179] */
    (xdc_Char)0x20,  /* [1180] */
    (xdc_Char)0x63,  /* [1181] */
    (xdc_Char)0x72,  /* [1182] */
    (xdc_Char)0x65,  /* [1183] */
    (xdc_Char)0x61,  /* [1184] */
    (xdc_Char)0x74,  /* [1185] */
    (xdc_Char)0x65,  /* [1186] */
    (xdc_Char)0x20,  /* [1187] */
    (xdc_Char)0x61,  /* [1188] */
    (xdc_Char)0x20,  /* [1189] */
    (xdc_Char)0x53,  /* [1190] */
    (xdc_Char)0x77,  /* [1191] */
    (xdc_Char)0x69,  /* [1192] */
    (xdc_Char)0x20,  /* [1193] */
    (xdc_Char)0x77,  /* [1194] */
    (xdc_Char)0x68,  /* [1195] */
    (xdc_Char)0x65,  /* [1196] */
    (xdc_Char)0x6e,  /* [1197] */
    (xdc_Char)0x20,  /* [1198] */
    (xdc_Char)0x53,  /* [1199] */
    (xdc_Char)0x77,  /* [1200] */
    (xdc_Char)0x69,  /* [1201] */
    (xdc_Char)0x20,  /* [1202] */
    (xdc_Char)0x69,  /* [1203] */
    (xdc_Char)0x73,  /* [1204] */
    (xdc_Char)0x20,  /* [1205] */
    (xdc_Char)0x64,  /* [1206] */
    (xdc_Char)0x69,  /* [1207] */
    (xdc_Char)0x73,  /* [1208] */
    (xdc_Char)0x61,  /* [1209] */
    (xdc_Char)0x62,  /* [1210] */
    (xdc_Char)0x6c,  /* [1211] */
    (xdc_Char)0x65,  /* [1212] */
    (xdc_Char)0x64,  /* [1213] */
    (xdc_Char)0x2e,  /* [1214] */
    (xdc_Char)0x0,  /* [1215] */
    (xdc_Char)0x41,  /* [1216] */
    (xdc_Char)0x5f,  /* [1217] */
    (xdc_Char)0x62,  /* [1218] */
    (xdc_Char)0x61,  /* [1219] */
    (xdc_Char)0x64,  /* [1220] */
    (xdc_Char)0x50,  /* [1221] */
    (xdc_Char)0x72,  /* [1222] */
    (xdc_Char)0x69,  /* [1223] */
    (xdc_Char)0x6f,  /* [1224] */
    (xdc_Char)0x72,  /* [1225] */
    (xdc_Char)0x69,  /* [1226] */
    (xdc_Char)0x74,  /* [1227] */
    (xdc_Char)0x79,  /* [1228] */
    (xdc_Char)0x3a,  /* [1229] */
    (xdc_Char)0x20,  /* [1230] */
    (xdc_Char)0x41,  /* [1231] */
    (xdc_Char)0x6e,  /* [1232] */
    (xdc_Char)0x20,  /* [1233] */
    (xdc_Char)0x69,  /* [1234] */
    (xdc_Char)0x6e,  /* [1235] */
    (xdc_Char)0x76,  /* [1236] */
    (xdc_Char)0x61,  /* [1237] */
    (xdc_Char)0x6c,  /* [1238] */
    (xdc_Char)0x69,  /* [1239] */
    (xdc_Char)0x64,  /* [1240] */
    (xdc_Char)0x20,  /* [1241] */
    (xdc_Char)0x53,  /* [1242] */
    (xdc_Char)0x77,  /* [1243] */
    (xdc_Char)0x69,  /* [1244] */
    (xdc_Char)0x20,  /* [1245] */
    (xdc_Char)0x70,  /* [1246] */
    (xdc_Char)0x72,  /* [1247] */
    (xdc_Char)0x69,  /* [1248] */
    (xdc_Char)0x6f,  /* [1249] */
    (xdc_Char)0x72,  /* [1250] */
    (xdc_Char)0x69,  /* [1251] */
    (xdc_Char)0x74,  /* [1252] */
    (xdc_Char)0x79,  /* [1253] */
    (xdc_Char)0x20,  /* [1254] */
    (xdc_Char)0x77,  /* [1255] */
    (xdc_Char)0x61,  /* [1256] */
    (xdc_Char)0x73,  /* [1257] */
    (xdc_Char)0x20,  /* [1258] */
    (xdc_Char)0x75,  /* [1259] */
    (xdc_Char)0x73,  /* [1260] */
    (xdc_Char)0x65,  /* [1261] */
    (xdc_Char)0x64,  /* [1262] */
    (xdc_Char)0x2e,  /* [1263] */
    (xdc_Char)0x0,  /* [1264] */
    (xdc_Char)0x41,  /* [1265] */
    (xdc_Char)0x5f,  /* [1266] */
    (xdc_Char)0x62,  /* [1267] */
    (xdc_Char)0x61,  /* [1268] */
    (xdc_Char)0x64,  /* [1269] */
    (xdc_Char)0x54,  /* [1270] */
    (xdc_Char)0x68,  /* [1271] */
    (xdc_Char)0x72,  /* [1272] */
    (xdc_Char)0x65,  /* [1273] */
    (xdc_Char)0x61,  /* [1274] */
    (xdc_Char)0x64,  /* [1275] */
    (xdc_Char)0x54,  /* [1276] */
    (xdc_Char)0x79,  /* [1277] */
    (xdc_Char)0x70,  /* [1278] */
    (xdc_Char)0x65,  /* [1279] */
    (xdc_Char)0x3a,  /* [1280] */
    (xdc_Char)0x20,  /* [1281] */
    (xdc_Char)0x43,  /* [1282] */
    (xdc_Char)0x61,  /* [1283] */
    (xdc_Char)0x6e,  /* [1284] */
    (xdc_Char)0x6e,  /* [1285] */
    (xdc_Char)0x6f,  /* [1286] */
    (xdc_Char)0x74,  /* [1287] */
    (xdc_Char)0x20,  /* [1288] */
    (xdc_Char)0x63,  /* [1289] */
    (xdc_Char)0x72,  /* [1290] */
    (xdc_Char)0x65,  /* [1291] */
    (xdc_Char)0x61,  /* [1292] */
    (xdc_Char)0x74,  /* [1293] */
    (xdc_Char)0x65,  /* [1294] */
    (xdc_Char)0x2f,  /* [1295] */
    (xdc_Char)0x64,  /* [1296] */
    (xdc_Char)0x65,  /* [1297] */
    (xdc_Char)0x6c,  /* [1298] */
    (xdc_Char)0x65,  /* [1299] */
    (xdc_Char)0x74,  /* [1300] */
    (xdc_Char)0x65,  /* [1301] */
    (xdc_Char)0x20,  /* [1302] */
    (xdc_Char)0x61,  /* [1303] */
    (xdc_Char)0x20,  /* [1304] */
    (xdc_Char)0x74,  /* [1305] */
    (xdc_Char)0x61,  /* [1306] */
    (xdc_Char)0x73,  /* [1307] */
    (xdc_Char)0x6b,  /* [1308] */
    (xdc_Char)0x20,  /* [1309] */
    (xdc_Char)0x66,  /* [1310] */
    (xdc_Char)0x72,  /* [1311] */
    (xdc_Char)0x6f,  /* [1312] */
    (xdc_Char)0x6d,  /* [1313] */
    (xdc_Char)0x20,  /* [1314] */
    (xdc_Char)0x48,  /* [1315] */
    (xdc_Char)0x77,  /* [1316] */
    (xdc_Char)0x69,  /* [1317] */
    (xdc_Char)0x20,  /* [1318] */
    (xdc_Char)0x6f,  /* [1319] */
    (xdc_Char)0x72,  /* [1320] */
    (xdc_Char)0x20,  /* [1321] */
    (xdc_Char)0x53,  /* [1322] */
    (xdc_Char)0x77,  /* [1323] */
    (xdc_Char)0x69,  /* [1324] */
    (xdc_Char)0x20,  /* [1325] */
    (xdc_Char)0x74,  /* [1326] */
    (xdc_Char)0x68,  /* [1327] */
    (xdc_Char)0x72,  /* [1328] */
    (xdc_Char)0x65,  /* [1329] */
    (xdc_Char)0x61,  /* [1330] */
    (xdc_Char)0x64,  /* [1331] */
    (xdc_Char)0x2e,  /* [1332] */
    (xdc_Char)0x0,  /* [1333] */
    (xdc_Char)0x41,  /* [1334] */
    (xdc_Char)0x5f,  /* [1335] */
    (xdc_Char)0x62,  /* [1336] */
    (xdc_Char)0x61,  /* [1337] */
    (xdc_Char)0x64,  /* [1338] */
    (xdc_Char)0x54,  /* [1339] */
    (xdc_Char)0x61,  /* [1340] */
    (xdc_Char)0x73,  /* [1341] */
    (xdc_Char)0x6b,  /* [1342] */
    (xdc_Char)0x53,  /* [1343] */
    (xdc_Char)0x74,  /* [1344] */
    (xdc_Char)0x61,  /* [1345] */
    (xdc_Char)0x74,  /* [1346] */
    (xdc_Char)0x65,  /* [1347] */
    (xdc_Char)0x3a,  /* [1348] */
    (xdc_Char)0x20,  /* [1349] */
    (xdc_Char)0x43,  /* [1350] */
    (xdc_Char)0x61,  /* [1351] */
    (xdc_Char)0x6e,  /* [1352] */
    (xdc_Char)0x27,  /* [1353] */
    (xdc_Char)0x74,  /* [1354] */
    (xdc_Char)0x20,  /* [1355] */
    (xdc_Char)0x64,  /* [1356] */
    (xdc_Char)0x65,  /* [1357] */
    (xdc_Char)0x6c,  /* [1358] */
    (xdc_Char)0x65,  /* [1359] */
    (xdc_Char)0x74,  /* [1360] */
    (xdc_Char)0x65,  /* [1361] */
    (xdc_Char)0x20,  /* [1362] */
    (xdc_Char)0x61,  /* [1363] */
    (xdc_Char)0x20,  /* [1364] */
    (xdc_Char)0x74,  /* [1365] */
    (xdc_Char)0x61,  /* [1366] */
    (xdc_Char)0x73,  /* [1367] */
    (xdc_Char)0x6b,  /* [1368] */
    (xdc_Char)0x20,  /* [1369] */
    (xdc_Char)0x69,  /* [1370] */
    (xdc_Char)0x6e,  /* [1371] */
    (xdc_Char)0x20,  /* [1372] */
    (xdc_Char)0x52,  /* [1373] */
    (xdc_Char)0x55,  /* [1374] */
    (xdc_Char)0x4e,  /* [1375] */
    (xdc_Char)0x4e,  /* [1376] */
    (xdc_Char)0x49,  /* [1377] */
    (xdc_Char)0x4e,  /* [1378] */
    (xdc_Char)0x47,  /* [1379] */
    (xdc_Char)0x20,  /* [1380] */
    (xdc_Char)0x73,  /* [1381] */
    (xdc_Char)0x74,  /* [1382] */
    (xdc_Char)0x61,  /* [1383] */
    (xdc_Char)0x74,  /* [1384] */
    (xdc_Char)0x65,  /* [1385] */
    (xdc_Char)0x2e,  /* [1386] */
    (xdc_Char)0x0,  /* [1387] */
    (xdc_Char)0x41,  /* [1388] */
    (xdc_Char)0x5f,  /* [1389] */
    (xdc_Char)0x6e,  /* [1390] */
    (xdc_Char)0x6f,  /* [1391] */
    (xdc_Char)0x50,  /* [1392] */
    (xdc_Char)0x65,  /* [1393] */
    (xdc_Char)0x6e,  /* [1394] */
    (xdc_Char)0x64,  /* [1395] */
    (xdc_Char)0x45,  /* [1396] */
    (xdc_Char)0x6c,  /* [1397] */
    (xdc_Char)0x65,  /* [1398] */
    (xdc_Char)0x6d,  /* [1399] */
    (xdc_Char)0x3a,  /* [1400] */
    (xdc_Char)0x20,  /* [1401] */
    (xdc_Char)0x4e,  /* [1402] */
    (xdc_Char)0x6f,  /* [1403] */
    (xdc_Char)0x74,  /* [1404] */
    (xdc_Char)0x20,  /* [1405] */
    (xdc_Char)0x65,  /* [1406] */
    (xdc_Char)0x6e,  /* [1407] */
    (xdc_Char)0x6f,  /* [1408] */
    (xdc_Char)0x75,  /* [1409] */
    (xdc_Char)0x67,  /* [1410] */
    (xdc_Char)0x68,  /* [1411] */
    (xdc_Char)0x20,  /* [1412] */
    (xdc_Char)0x69,  /* [1413] */
    (xdc_Char)0x6e,  /* [1414] */
    (xdc_Char)0x66,  /* [1415] */
    (xdc_Char)0x6f,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x74,  /* [1418] */
    (xdc_Char)0x6f,  /* [1419] */
    (xdc_Char)0x20,  /* [1420] */
    (xdc_Char)0x64,  /* [1421] */
    (xdc_Char)0x65,  /* [1422] */
    (xdc_Char)0x6c,  /* [1423] */
    (xdc_Char)0x65,  /* [1424] */
    (xdc_Char)0x74,  /* [1425] */
    (xdc_Char)0x65,  /* [1426] */
    (xdc_Char)0x20,  /* [1427] */
    (xdc_Char)0x42,  /* [1428] */
    (xdc_Char)0x4c,  /* [1429] */
    (xdc_Char)0x4f,  /* [1430] */
    (xdc_Char)0x43,  /* [1431] */
    (xdc_Char)0x4b,  /* [1432] */
    (xdc_Char)0x45,  /* [1433] */
    (xdc_Char)0x44,  /* [1434] */
    (xdc_Char)0x20,  /* [1435] */
    (xdc_Char)0x74,  /* [1436] */
    (xdc_Char)0x61,  /* [1437] */
    (xdc_Char)0x73,  /* [1438] */
    (xdc_Char)0x6b,  /* [1439] */
    (xdc_Char)0x2e,  /* [1440] */
    (xdc_Char)0x0,  /* [1441] */
    (xdc_Char)0x41,  /* [1442] */
    (xdc_Char)0x5f,  /* [1443] */
    (xdc_Char)0x74,  /* [1444] */
    (xdc_Char)0x61,  /* [1445] */
    (xdc_Char)0x73,  /* [1446] */
    (xdc_Char)0x6b,  /* [1447] */
    (xdc_Char)0x44,  /* [1448] */
    (xdc_Char)0x69,  /* [1449] */
    (xdc_Char)0x73,  /* [1450] */
    (xdc_Char)0x61,  /* [1451] */
    (xdc_Char)0x62,  /* [1452] */
    (xdc_Char)0x6c,  /* [1453] */
    (xdc_Char)0x65,  /* [1454] */
    (xdc_Char)0x64,  /* [1455] */
    (xdc_Char)0x3a,  /* [1456] */
    (xdc_Char)0x20,  /* [1457] */
    (xdc_Char)0x43,  /* [1458] */
    (xdc_Char)0x61,  /* [1459] */
    (xdc_Char)0x6e,  /* [1460] */
    (xdc_Char)0x6e,  /* [1461] */
    (xdc_Char)0x6f,  /* [1462] */
    (xdc_Char)0x74,  /* [1463] */
    (xdc_Char)0x20,  /* [1464] */
    (xdc_Char)0x63,  /* [1465] */
    (xdc_Char)0x72,  /* [1466] */
    (xdc_Char)0x65,  /* [1467] */
    (xdc_Char)0x61,  /* [1468] */
    (xdc_Char)0x74,  /* [1469] */
    (xdc_Char)0x65,  /* [1470] */
    (xdc_Char)0x20,  /* [1471] */
    (xdc_Char)0x61,  /* [1472] */
    (xdc_Char)0x20,  /* [1473] */
    (xdc_Char)0x74,  /* [1474] */
    (xdc_Char)0x61,  /* [1475] */
    (xdc_Char)0x73,  /* [1476] */
    (xdc_Char)0x6b,  /* [1477] */
    (xdc_Char)0x20,  /* [1478] */
    (xdc_Char)0x77,  /* [1479] */
    (xdc_Char)0x68,  /* [1480] */
    (xdc_Char)0x65,  /* [1481] */
    (xdc_Char)0x6e,  /* [1482] */
    (xdc_Char)0x20,  /* [1483] */
    (xdc_Char)0x74,  /* [1484] */
    (xdc_Char)0x61,  /* [1485] */
    (xdc_Char)0x73,  /* [1486] */
    (xdc_Char)0x6b,  /* [1487] */
    (xdc_Char)0x69,  /* [1488] */
    (xdc_Char)0x6e,  /* [1489] */
    (xdc_Char)0x67,  /* [1490] */
    (xdc_Char)0x20,  /* [1491] */
    (xdc_Char)0x69,  /* [1492] */
    (xdc_Char)0x73,  /* [1493] */
    (xdc_Char)0x20,  /* [1494] */
    (xdc_Char)0x64,  /* [1495] */
    (xdc_Char)0x69,  /* [1496] */
    (xdc_Char)0x73,  /* [1497] */
    (xdc_Char)0x61,  /* [1498] */
    (xdc_Char)0x62,  /* [1499] */
    (xdc_Char)0x6c,  /* [1500] */
    (xdc_Char)0x65,  /* [1501] */
    (xdc_Char)0x64,  /* [1502] */
    (xdc_Char)0x2e,  /* [1503] */
    (xdc_Char)0x0,  /* [1504] */
    (xdc_Char)0x41,  /* [1505] */
    (xdc_Char)0x5f,  /* [1506] */
    (xdc_Char)0x62,  /* [1507] */
    (xdc_Char)0x61,  /* [1508] */
    (xdc_Char)0x64,  /* [1509] */
    (xdc_Char)0x50,  /* [1510] */
    (xdc_Char)0x72,  /* [1511] */
    (xdc_Char)0x69,  /* [1512] */
    (xdc_Char)0x6f,  /* [1513] */
    (xdc_Char)0x72,  /* [1514] */
    (xdc_Char)0x69,  /* [1515] */
    (xdc_Char)0x74,  /* [1516] */
    (xdc_Char)0x79,  /* [1517] */
    (xdc_Char)0x3a,  /* [1518] */
    (xdc_Char)0x20,  /* [1519] */
    (xdc_Char)0x41,  /* [1520] */
    (xdc_Char)0x6e,  /* [1521] */
    (xdc_Char)0x20,  /* [1522] */
    (xdc_Char)0x69,  /* [1523] */
    (xdc_Char)0x6e,  /* [1524] */
    (xdc_Char)0x76,  /* [1525] */
    (xdc_Char)0x61,  /* [1526] */
    (xdc_Char)0x6c,  /* [1527] */
    (xdc_Char)0x69,  /* [1528] */
    (xdc_Char)0x64,  /* [1529] */
    (xdc_Char)0x20,  /* [1530] */
    (xdc_Char)0x74,  /* [1531] */
    (xdc_Char)0x61,  /* [1532] */
    (xdc_Char)0x73,  /* [1533] */
    (xdc_Char)0x6b,  /* [1534] */
    (xdc_Char)0x20,  /* [1535] */
    (xdc_Char)0x70,  /* [1536] */
    (xdc_Char)0x72,  /* [1537] */
    (xdc_Char)0x69,  /* [1538] */
    (xdc_Char)0x6f,  /* [1539] */
    (xdc_Char)0x72,  /* [1540] */
    (xdc_Char)0x69,  /* [1541] */
    (xdc_Char)0x74,  /* [1542] */
    (xdc_Char)0x79,  /* [1543] */
    (xdc_Char)0x20,  /* [1544] */
    (xdc_Char)0x77,  /* [1545] */
    (xdc_Char)0x61,  /* [1546] */
    (xdc_Char)0x73,  /* [1547] */
    (xdc_Char)0x20,  /* [1548] */
    (xdc_Char)0x75,  /* [1549] */
    (xdc_Char)0x73,  /* [1550] */
    (xdc_Char)0x65,  /* [1551] */
    (xdc_Char)0x64,  /* [1552] */
    (xdc_Char)0x2e,  /* [1553] */
    (xdc_Char)0x0,  /* [1554] */
    (xdc_Char)0x41,  /* [1555] */
    (xdc_Char)0x5f,  /* [1556] */
    (xdc_Char)0x62,  /* [1557] */
    (xdc_Char)0x61,  /* [1558] */
    (xdc_Char)0x64,  /* [1559] */
    (xdc_Char)0x54,  /* [1560] */
    (xdc_Char)0x69,  /* [1561] */
    (xdc_Char)0x6d,  /* [1562] */
    (xdc_Char)0x65,  /* [1563] */
    (xdc_Char)0x6f,  /* [1564] */
    (xdc_Char)0x75,  /* [1565] */
    (xdc_Char)0x74,  /* [1566] */
    (xdc_Char)0x3a,  /* [1567] */
    (xdc_Char)0x20,  /* [1568] */
    (xdc_Char)0x43,  /* [1569] */
    (xdc_Char)0x61,  /* [1570] */
    (xdc_Char)0x6e,  /* [1571] */
    (xdc_Char)0x27,  /* [1572] */
    (xdc_Char)0x74,  /* [1573] */
    (xdc_Char)0x20,  /* [1574] */
    (xdc_Char)0x73,  /* [1575] */
    (xdc_Char)0x6c,  /* [1576] */
    (xdc_Char)0x65,  /* [1577] */
    (xdc_Char)0x65,  /* [1578] */
    (xdc_Char)0x70,  /* [1579] */
    (xdc_Char)0x20,  /* [1580] */
    (xdc_Char)0x46,  /* [1581] */
    (xdc_Char)0x4f,  /* [1582] */
    (xdc_Char)0x52,  /* [1583] */
    (xdc_Char)0x45,  /* [1584] */
    (xdc_Char)0x56,  /* [1585] */
    (xdc_Char)0x45,  /* [1586] */
    (xdc_Char)0x52,  /* [1587] */
    (xdc_Char)0x2e,  /* [1588] */
    (xdc_Char)0x0,  /* [1589] */
    (xdc_Char)0x41,  /* [1590] */
    (xdc_Char)0x5f,  /* [1591] */
    (xdc_Char)0x62,  /* [1592] */
    (xdc_Char)0x61,  /* [1593] */
    (xdc_Char)0x64,  /* [1594] */
    (xdc_Char)0x41,  /* [1595] */
    (xdc_Char)0x66,  /* [1596] */
    (xdc_Char)0x66,  /* [1597] */
    (xdc_Char)0x69,  /* [1598] */
    (xdc_Char)0x6e,  /* [1599] */
    (xdc_Char)0x69,  /* [1600] */
    (xdc_Char)0x74,  /* [1601] */
    (xdc_Char)0x79,  /* [1602] */
    (xdc_Char)0x3a,  /* [1603] */
    (xdc_Char)0x20,  /* [1604] */
    (xdc_Char)0x49,  /* [1605] */
    (xdc_Char)0x6e,  /* [1606] */
    (xdc_Char)0x76,  /* [1607] */
    (xdc_Char)0x61,  /* [1608] */
    (xdc_Char)0x6c,  /* [1609] */
    (xdc_Char)0x69,  /* [1610] */
    (xdc_Char)0x64,  /* [1611] */
    (xdc_Char)0x20,  /* [1612] */
    (xdc_Char)0x61,  /* [1613] */
    (xdc_Char)0x66,  /* [1614] */
    (xdc_Char)0x66,  /* [1615] */
    (xdc_Char)0x69,  /* [1616] */
    (xdc_Char)0x6e,  /* [1617] */
    (xdc_Char)0x69,  /* [1618] */
    (xdc_Char)0x74,  /* [1619] */
    (xdc_Char)0x79,  /* [1620] */
    (xdc_Char)0x2e,  /* [1621] */
    (xdc_Char)0x0,  /* [1622] */
    (xdc_Char)0x41,  /* [1623] */
    (xdc_Char)0x5f,  /* [1624] */
    (xdc_Char)0x73,  /* [1625] */
    (xdc_Char)0x6c,  /* [1626] */
    (xdc_Char)0x65,  /* [1627] */
    (xdc_Char)0x65,  /* [1628] */
    (xdc_Char)0x70,  /* [1629] */
    (xdc_Char)0x54,  /* [1630] */
    (xdc_Char)0x61,  /* [1631] */
    (xdc_Char)0x73,  /* [1632] */
    (xdc_Char)0x6b,  /* [1633] */
    (xdc_Char)0x44,  /* [1634] */
    (xdc_Char)0x69,  /* [1635] */
    (xdc_Char)0x73,  /* [1636] */
    (xdc_Char)0x61,  /* [1637] */
    (xdc_Char)0x62,  /* [1638] */
    (xdc_Char)0x6c,  /* [1639] */
    (xdc_Char)0x65,  /* [1640] */
    (xdc_Char)0x64,  /* [1641] */
    (xdc_Char)0x3a,  /* [1642] */
    (xdc_Char)0x20,  /* [1643] */
    (xdc_Char)0x43,  /* [1644] */
    (xdc_Char)0x61,  /* [1645] */
    (xdc_Char)0x6e,  /* [1646] */
    (xdc_Char)0x6e,  /* [1647] */
    (xdc_Char)0x6f,  /* [1648] */
    (xdc_Char)0x74,  /* [1649] */
    (xdc_Char)0x20,  /* [1650] */
    (xdc_Char)0x63,  /* [1651] */
    (xdc_Char)0x61,  /* [1652] */
    (xdc_Char)0x6c,  /* [1653] */
    (xdc_Char)0x6c,  /* [1654] */
    (xdc_Char)0x20,  /* [1655] */
    (xdc_Char)0x54,  /* [1656] */
    (xdc_Char)0x61,  /* [1657] */
    (xdc_Char)0x73,  /* [1658] */
    (xdc_Char)0x6b,  /* [1659] */
    (xdc_Char)0x5f,  /* [1660] */
    (xdc_Char)0x73,  /* [1661] */
    (xdc_Char)0x6c,  /* [1662] */
    (xdc_Char)0x65,  /* [1663] */
    (xdc_Char)0x65,  /* [1664] */
    (xdc_Char)0x70,  /* [1665] */
    (xdc_Char)0x28,  /* [1666] */
    (xdc_Char)0x29,  /* [1667] */
    (xdc_Char)0x20,  /* [1668] */
    (xdc_Char)0x77,  /* [1669] */
    (xdc_Char)0x68,  /* [1670] */
    (xdc_Char)0x69,  /* [1671] */
    (xdc_Char)0x6c,  /* [1672] */
    (xdc_Char)0x65,  /* [1673] */
    (xdc_Char)0x20,  /* [1674] */
    (xdc_Char)0x74,  /* [1675] */
    (xdc_Char)0x68,  /* [1676] */
    (xdc_Char)0x65,  /* [1677] */
    (xdc_Char)0x20,  /* [1678] */
    (xdc_Char)0x54,  /* [1679] */
    (xdc_Char)0x61,  /* [1680] */
    (xdc_Char)0x73,  /* [1681] */
    (xdc_Char)0x6b,  /* [1682] */
    (xdc_Char)0x20,  /* [1683] */
    (xdc_Char)0x73,  /* [1684] */
    (xdc_Char)0x63,  /* [1685] */
    (xdc_Char)0x68,  /* [1686] */
    (xdc_Char)0x65,  /* [1687] */
    (xdc_Char)0x64,  /* [1688] */
    (xdc_Char)0x75,  /* [1689] */
    (xdc_Char)0x6c,  /* [1690] */
    (xdc_Char)0x65,  /* [1691] */
    (xdc_Char)0x72,  /* [1692] */
    (xdc_Char)0x20,  /* [1693] */
    (xdc_Char)0x69,  /* [1694] */
    (xdc_Char)0x73,  /* [1695] */
    (xdc_Char)0x20,  /* [1696] */
    (xdc_Char)0x64,  /* [1697] */
    (xdc_Char)0x69,  /* [1698] */
    (xdc_Char)0x73,  /* [1699] */
    (xdc_Char)0x61,  /* [1700] */
    (xdc_Char)0x62,  /* [1701] */
    (xdc_Char)0x6c,  /* [1702] */
    (xdc_Char)0x65,  /* [1703] */
    (xdc_Char)0x64,  /* [1704] */
    (xdc_Char)0x2e,  /* [1705] */
    (xdc_Char)0x0,  /* [1706] */
    (xdc_Char)0x41,  /* [1707] */
    (xdc_Char)0x5f,  /* [1708] */
    (xdc_Char)0x69,  /* [1709] */
    (xdc_Char)0x6e,  /* [1710] */
    (xdc_Char)0x76,  /* [1711] */
    (xdc_Char)0x61,  /* [1712] */
    (xdc_Char)0x6c,  /* [1713] */
    (xdc_Char)0x69,  /* [1714] */
    (xdc_Char)0x64,  /* [1715] */
    (xdc_Char)0x43,  /* [1716] */
    (xdc_Char)0x6f,  /* [1717] */
    (xdc_Char)0x72,  /* [1718] */
    (xdc_Char)0x65,  /* [1719] */
    (xdc_Char)0x49,  /* [1720] */
    (xdc_Char)0x64,  /* [1721] */
    (xdc_Char)0x3a,  /* [1722] */
    (xdc_Char)0x20,  /* [1723] */
    (xdc_Char)0x43,  /* [1724] */
    (xdc_Char)0x61,  /* [1725] */
    (xdc_Char)0x6e,  /* [1726] */
    (xdc_Char)0x6e,  /* [1727] */
    (xdc_Char)0x6f,  /* [1728] */
    (xdc_Char)0x74,  /* [1729] */
    (xdc_Char)0x20,  /* [1730] */
    (xdc_Char)0x70,  /* [1731] */
    (xdc_Char)0x61,  /* [1732] */
    (xdc_Char)0x73,  /* [1733] */
    (xdc_Char)0x73,  /* [1734] */
    (xdc_Char)0x20,  /* [1735] */
    (xdc_Char)0x61,  /* [1736] */
    (xdc_Char)0x20,  /* [1737] */
    (xdc_Char)0x6e,  /* [1738] */
    (xdc_Char)0x6f,  /* [1739] */
    (xdc_Char)0x6e,  /* [1740] */
    (xdc_Char)0x2d,  /* [1741] */
    (xdc_Char)0x7a,  /* [1742] */
    (xdc_Char)0x65,  /* [1743] */
    (xdc_Char)0x72,  /* [1744] */
    (xdc_Char)0x6f,  /* [1745] */
    (xdc_Char)0x20,  /* [1746] */
    (xdc_Char)0x43,  /* [1747] */
    (xdc_Char)0x6f,  /* [1748] */
    (xdc_Char)0x72,  /* [1749] */
    (xdc_Char)0x65,  /* [1750] */
    (xdc_Char)0x49,  /* [1751] */
    (xdc_Char)0x64,  /* [1752] */
    (xdc_Char)0x20,  /* [1753] */
    (xdc_Char)0x69,  /* [1754] */
    (xdc_Char)0x6e,  /* [1755] */
    (xdc_Char)0x20,  /* [1756] */
    (xdc_Char)0x61,  /* [1757] */
    (xdc_Char)0x20,  /* [1758] */
    (xdc_Char)0x6e,  /* [1759] */
    (xdc_Char)0x6f,  /* [1760] */
    (xdc_Char)0x6e,  /* [1761] */
    (xdc_Char)0x2d,  /* [1762] */
    (xdc_Char)0x53,  /* [1763] */
    (xdc_Char)0x4d,  /* [1764] */
    (xdc_Char)0x50,  /* [1765] */
    (xdc_Char)0x20,  /* [1766] */
    (xdc_Char)0x61,  /* [1767] */
    (xdc_Char)0x70,  /* [1768] */
    (xdc_Char)0x70,  /* [1769] */
    (xdc_Char)0x6c,  /* [1770] */
    (xdc_Char)0x69,  /* [1771] */
    (xdc_Char)0x63,  /* [1772] */
    (xdc_Char)0x61,  /* [1773] */
    (xdc_Char)0x74,  /* [1774] */
    (xdc_Char)0x69,  /* [1775] */
    (xdc_Char)0x6f,  /* [1776] */
    (xdc_Char)0x6e,  /* [1777] */
    (xdc_Char)0x2e,  /* [1778] */
    (xdc_Char)0x0,  /* [1779] */
    (xdc_Char)0x41,  /* [1780] */
    (xdc_Char)0x5f,  /* [1781] */
    (xdc_Char)0x75,  /* [1782] */
    (xdc_Char)0x6e,  /* [1783] */
    (xdc_Char)0x73,  /* [1784] */
    (xdc_Char)0x75,  /* [1785] */
    (xdc_Char)0x70,  /* [1786] */
    (xdc_Char)0x70,  /* [1787] */
    (xdc_Char)0x6f,  /* [1788] */
    (xdc_Char)0x72,  /* [1789] */
    (xdc_Char)0x74,  /* [1790] */
    (xdc_Char)0x65,  /* [1791] */
    (xdc_Char)0x64,  /* [1792] */
    (xdc_Char)0x4d,  /* [1793] */
    (xdc_Char)0x61,  /* [1794] */
    (xdc_Char)0x73,  /* [1795] */
    (xdc_Char)0x6b,  /* [1796] */
    (xdc_Char)0x69,  /* [1797] */
    (xdc_Char)0x6e,  /* [1798] */
    (xdc_Char)0x67,  /* [1799] */
    (xdc_Char)0x4f,  /* [1800] */
    (xdc_Char)0x70,  /* [1801] */
    (xdc_Char)0x74,  /* [1802] */
    (xdc_Char)0x69,  /* [1803] */
    (xdc_Char)0x6f,  /* [1804] */
    (xdc_Char)0x6e,  /* [1805] */
    (xdc_Char)0x3a,  /* [1806] */
    (xdc_Char)0x20,  /* [1807] */
    (xdc_Char)0x75,  /* [1808] */
    (xdc_Char)0x6e,  /* [1809] */
    (xdc_Char)0x73,  /* [1810] */
    (xdc_Char)0x75,  /* [1811] */
    (xdc_Char)0x70,  /* [1812] */
    (xdc_Char)0x70,  /* [1813] */
    (xdc_Char)0x6f,  /* [1814] */
    (xdc_Char)0x72,  /* [1815] */
    (xdc_Char)0x74,  /* [1816] */
    (xdc_Char)0x65,  /* [1817] */
    (xdc_Char)0x64,  /* [1818] */
    (xdc_Char)0x20,  /* [1819] */
    (xdc_Char)0x6d,  /* [1820] */
    (xdc_Char)0x61,  /* [1821] */
    (xdc_Char)0x73,  /* [1822] */
    (xdc_Char)0x6b,  /* [1823] */
    (xdc_Char)0x53,  /* [1824] */
    (xdc_Char)0x65,  /* [1825] */
    (xdc_Char)0x74,  /* [1826] */
    (xdc_Char)0x74,  /* [1827] */
    (xdc_Char)0x69,  /* [1828] */
    (xdc_Char)0x6e,  /* [1829] */
    (xdc_Char)0x67,  /* [1830] */
    (xdc_Char)0x2e,  /* [1831] */
    (xdc_Char)0x0,  /* [1832] */
    (xdc_Char)0x41,  /* [1833] */
    (xdc_Char)0x5f,  /* [1834] */
    (xdc_Char)0x74,  /* [1835] */
    (xdc_Char)0x6f,  /* [1836] */
    (xdc_Char)0x6f,  /* [1837] */
    (xdc_Char)0x4d,  /* [1838] */
    (xdc_Char)0x61,  /* [1839] */
    (xdc_Char)0x6e,  /* [1840] */
    (xdc_Char)0x79,  /* [1841] */
    (xdc_Char)0x43,  /* [1842] */
    (xdc_Char)0x61,  /* [1843] */
    (xdc_Char)0x6c,  /* [1844] */
    (xdc_Char)0x6c,  /* [1845] */
    (xdc_Char)0x73,  /* [1846] */
    (xdc_Char)0x52,  /* [1847] */
    (xdc_Char)0x65,  /* [1848] */
    (xdc_Char)0x6c,  /* [1849] */
    (xdc_Char)0x65,  /* [1850] */
    (xdc_Char)0x61,  /* [1851] */
    (xdc_Char)0x73,  /* [1852] */
    (xdc_Char)0x65,  /* [1853] */
    (xdc_Char)0x43,  /* [1854] */
    (xdc_Char)0x6f,  /* [1855] */
    (xdc_Char)0x6e,  /* [1856] */
    (xdc_Char)0x73,  /* [1857] */
    (xdc_Char)0x74,  /* [1858] */
    (xdc_Char)0x72,  /* [1859] */
    (xdc_Char)0x61,  /* [1860] */
    (xdc_Char)0x69,  /* [1861] */
    (xdc_Char)0x6e,  /* [1862] */
    (xdc_Char)0x74,  /* [1863] */
    (xdc_Char)0x3a,  /* [1864] */
    (xdc_Char)0x20,  /* [1865] */
    (xdc_Char)0x50,  /* [1866] */
    (xdc_Char)0x6f,  /* [1867] */
    (xdc_Char)0x77,  /* [1868] */
    (xdc_Char)0x65,  /* [1869] */
    (xdc_Char)0x72,  /* [1870] */
    (xdc_Char)0x5f,  /* [1871] */
    (xdc_Char)0x72,  /* [1872] */
    (xdc_Char)0x65,  /* [1873] */
    (xdc_Char)0x6c,  /* [1874] */
    (xdc_Char)0x65,  /* [1875] */
    (xdc_Char)0x61,  /* [1876] */
    (xdc_Char)0x73,  /* [1877] */
    (xdc_Char)0x65,  /* [1878] */
    (xdc_Char)0x43,  /* [1879] */
    (xdc_Char)0x6f,  /* [1880] */
    (xdc_Char)0x6e,  /* [1881] */
    (xdc_Char)0x73,  /* [1882] */
    (xdc_Char)0x74,  /* [1883] */
    (xdc_Char)0x72,  /* [1884] */
    (xdc_Char)0x61,  /* [1885] */
    (xdc_Char)0x69,  /* [1886] */
    (xdc_Char)0x6e,  /* [1887] */
    (xdc_Char)0x74,  /* [1888] */
    (xdc_Char)0x28,  /* [1889] */
    (xdc_Char)0x29,  /* [1890] */
    (xdc_Char)0x20,  /* [1891] */
    (xdc_Char)0x63,  /* [1892] */
    (xdc_Char)0x61,  /* [1893] */
    (xdc_Char)0x6c,  /* [1894] */
    (xdc_Char)0x6c,  /* [1895] */
    (xdc_Char)0x65,  /* [1896] */
    (xdc_Char)0x64,  /* [1897] */
    (xdc_Char)0x20,  /* [1898] */
    (xdc_Char)0x74,  /* [1899] */
    (xdc_Char)0x6f,  /* [1900] */
    (xdc_Char)0x6f,  /* [1901] */
    (xdc_Char)0x20,  /* [1902] */
    (xdc_Char)0x6d,  /* [1903] */
    (xdc_Char)0x61,  /* [1904] */
    (xdc_Char)0x6e,  /* [1905] */
    (xdc_Char)0x79,  /* [1906] */
    (xdc_Char)0x20,  /* [1907] */
    (xdc_Char)0x74,  /* [1908] */
    (xdc_Char)0x69,  /* [1909] */
    (xdc_Char)0x6d,  /* [1910] */
    (xdc_Char)0x65,  /* [1911] */
    (xdc_Char)0x73,  /* [1912] */
    (xdc_Char)0x20,  /* [1913] */
    (xdc_Char)0x66,  /* [1914] */
    (xdc_Char)0x6f,  /* [1915] */
    (xdc_Char)0x72,  /* [1916] */
    (xdc_Char)0x20,  /* [1917] */
    (xdc_Char)0x74,  /* [1918] */
    (xdc_Char)0x68,  /* [1919] */
    (xdc_Char)0x69,  /* [1920] */
    (xdc_Char)0x73,  /* [1921] */
    (xdc_Char)0x20,  /* [1922] */
    (xdc_Char)0x63,  /* [1923] */
    (xdc_Char)0x6f,  /* [1924] */
    (xdc_Char)0x6e,  /* [1925] */
    (xdc_Char)0x73,  /* [1926] */
    (xdc_Char)0x74,  /* [1927] */
    (xdc_Char)0x72,  /* [1928] */
    (xdc_Char)0x61,  /* [1929] */
    (xdc_Char)0x69,  /* [1930] */
    (xdc_Char)0x6e,  /* [1931] */
    (xdc_Char)0x74,  /* [1932] */
    (xdc_Char)0x2e,  /* [1933] */
    (xdc_Char)0x0,  /* [1934] */
    (xdc_Char)0x41,  /* [1935] */
    (xdc_Char)0x5f,  /* [1936] */
    (xdc_Char)0x74,  /* [1937] */
    (xdc_Char)0x6f,  /* [1938] */
    (xdc_Char)0x6f,  /* [1939] */
    (xdc_Char)0x4d,  /* [1940] */
    (xdc_Char)0x61,  /* [1941] */
    (xdc_Char)0x6e,  /* [1942] */
    (xdc_Char)0x79,  /* [1943] */
    (xdc_Char)0x43,  /* [1944] */
    (xdc_Char)0x61,  /* [1945] */
    (xdc_Char)0x6c,  /* [1946] */
    (xdc_Char)0x6c,  /* [1947] */
    (xdc_Char)0x73,  /* [1948] */
    (xdc_Char)0x52,  /* [1949] */
    (xdc_Char)0x65,  /* [1950] */
    (xdc_Char)0x6c,  /* [1951] */
    (xdc_Char)0x65,  /* [1952] */
    (xdc_Char)0x61,  /* [1953] */
    (xdc_Char)0x73,  /* [1954] */
    (xdc_Char)0x65,  /* [1955] */
    (xdc_Char)0x44,  /* [1956] */
    (xdc_Char)0x65,  /* [1957] */
    (xdc_Char)0x70,  /* [1958] */
    (xdc_Char)0x65,  /* [1959] */
    (xdc_Char)0x6e,  /* [1960] */
    (xdc_Char)0x64,  /* [1961] */
    (xdc_Char)0x65,  /* [1962] */
    (xdc_Char)0x6e,  /* [1963] */
    (xdc_Char)0x63,  /* [1964] */
    (xdc_Char)0x79,  /* [1965] */
    (xdc_Char)0x3a,  /* [1966] */
    (xdc_Char)0x20,  /* [1967] */
    (xdc_Char)0x50,  /* [1968] */
    (xdc_Char)0x6f,  /* [1969] */
    (xdc_Char)0x77,  /* [1970] */
    (xdc_Char)0x65,  /* [1971] */
    (xdc_Char)0x72,  /* [1972] */
    (xdc_Char)0x5f,  /* [1973] */
    (xdc_Char)0x72,  /* [1974] */
    (xdc_Char)0x65,  /* [1975] */
    (xdc_Char)0x6c,  /* [1976] */
    (xdc_Char)0x65,  /* [1977] */
    (xdc_Char)0x61,  /* [1978] */
    (xdc_Char)0x73,  /* [1979] */
    (xdc_Char)0x65,  /* [1980] */
    (xdc_Char)0x44,  /* [1981] */
    (xdc_Char)0x65,  /* [1982] */
    (xdc_Char)0x70,  /* [1983] */
    (xdc_Char)0x65,  /* [1984] */
    (xdc_Char)0x6e,  /* [1985] */
    (xdc_Char)0x64,  /* [1986] */
    (xdc_Char)0x65,  /* [1987] */
    (xdc_Char)0x6e,  /* [1988] */
    (xdc_Char)0x63,  /* [1989] */
    (xdc_Char)0x79,  /* [1990] */
    (xdc_Char)0x28,  /* [1991] */
    (xdc_Char)0x29,  /* [1992] */
    (xdc_Char)0x20,  /* [1993] */
    (xdc_Char)0x63,  /* [1994] */
    (xdc_Char)0x61,  /* [1995] */
    (xdc_Char)0x6c,  /* [1996] */
    (xdc_Char)0x6c,  /* [1997] */
    (xdc_Char)0x65,  /* [1998] */
    (xdc_Char)0x64,  /* [1999] */
    (xdc_Char)0x20,  /* [2000] */
    (xdc_Char)0x74,  /* [2001] */
    (xdc_Char)0x6f,  /* [2002] */
    (xdc_Char)0x6f,  /* [2003] */
    (xdc_Char)0x20,  /* [2004] */
    (xdc_Char)0x6d,  /* [2005] */
    (xdc_Char)0x61,  /* [2006] */
    (xdc_Char)0x6e,  /* [2007] */
    (xdc_Char)0x79,  /* [2008] */
    (xdc_Char)0x20,  /* [2009] */
    (xdc_Char)0x74,  /* [2010] */
    (xdc_Char)0x69,  /* [2011] */
    (xdc_Char)0x6d,  /* [2012] */
    (xdc_Char)0x65,  /* [2013] */
    (xdc_Char)0x73,  /* [2014] */
    (xdc_Char)0x20,  /* [2015] */
    (xdc_Char)0x66,  /* [2016] */
    (xdc_Char)0x6f,  /* [2017] */
    (xdc_Char)0x72,  /* [2018] */
    (xdc_Char)0x20,  /* [2019] */
    (xdc_Char)0x74,  /* [2020] */
    (xdc_Char)0x68,  /* [2021] */
    (xdc_Char)0x69,  /* [2022] */
    (xdc_Char)0x73,  /* [2023] */
    (xdc_Char)0x20,  /* [2024] */
    (xdc_Char)0x72,  /* [2025] */
    (xdc_Char)0x65,  /* [2026] */
    (xdc_Char)0x73,  /* [2027] */
    (xdc_Char)0x6f,  /* [2028] */
    (xdc_Char)0x75,  /* [2029] */
    (xdc_Char)0x72,  /* [2030] */
    (xdc_Char)0x63,  /* [2031] */
    (xdc_Char)0x65,  /* [2032] */
    (xdc_Char)0x2e,  /* [2033] */
    (xdc_Char)0x0,  /* [2034] */
    (xdc_Char)0x62,  /* [2035] */
    (xdc_Char)0x75,  /* [2036] */
    (xdc_Char)0x66,  /* [2037] */
    (xdc_Char)0x20,  /* [2038] */
    (xdc_Char)0x70,  /* [2039] */
    (xdc_Char)0x61,  /* [2040] */
    (xdc_Char)0x72,  /* [2041] */
    (xdc_Char)0x61,  /* [2042] */
    (xdc_Char)0x6d,  /* [2043] */
    (xdc_Char)0x65,  /* [2044] */
    (xdc_Char)0x74,  /* [2045] */
    (xdc_Char)0x65,  /* [2046] */
    (xdc_Char)0x72,  /* [2047] */
    (xdc_Char)0x20,  /* [2048] */
    (xdc_Char)0x63,  /* [2049] */
    (xdc_Char)0x61,  /* [2050] */
    (xdc_Char)0x6e,  /* [2051] */
    (xdc_Char)0x6e,  /* [2052] */
    (xdc_Char)0x6f,  /* [2053] */
    (xdc_Char)0x74,  /* [2054] */
    (xdc_Char)0x20,  /* [2055] */
    (xdc_Char)0x62,  /* [2056] */
    (xdc_Char)0x65,  /* [2057] */
    (xdc_Char)0x20,  /* [2058] */
    (xdc_Char)0x6e,  /* [2059] */
    (xdc_Char)0x75,  /* [2060] */
    (xdc_Char)0x6c,  /* [2061] */
    (xdc_Char)0x6c,  /* [2062] */
    (xdc_Char)0x0,  /* [2063] */
    (xdc_Char)0x62,  /* [2064] */
    (xdc_Char)0x75,  /* [2065] */
    (xdc_Char)0x66,  /* [2066] */
    (xdc_Char)0x20,  /* [2067] */
    (xdc_Char)0x6e,  /* [2068] */
    (xdc_Char)0x6f,  /* [2069] */
    (xdc_Char)0x74,  /* [2070] */
    (xdc_Char)0x20,  /* [2071] */
    (xdc_Char)0x70,  /* [2072] */
    (xdc_Char)0x72,  /* [2073] */
    (xdc_Char)0x6f,  /* [2074] */
    (xdc_Char)0x70,  /* [2075] */
    (xdc_Char)0x65,  /* [2076] */
    (xdc_Char)0x72,  /* [2077] */
    (xdc_Char)0x6c,  /* [2078] */
    (xdc_Char)0x79,  /* [2079] */
    (xdc_Char)0x20,  /* [2080] */
    (xdc_Char)0x61,  /* [2081] */
    (xdc_Char)0x6c,  /* [2082] */
    (xdc_Char)0x69,  /* [2083] */
    (xdc_Char)0x67,  /* [2084] */
    (xdc_Char)0x6e,  /* [2085] */
    (xdc_Char)0x65,  /* [2086] */
    (xdc_Char)0x64,  /* [2087] */
    (xdc_Char)0x0,  /* [2088] */
    (xdc_Char)0x61,  /* [2089] */
    (xdc_Char)0x6c,  /* [2090] */
    (xdc_Char)0x69,  /* [2091] */
    (xdc_Char)0x67,  /* [2092] */
    (xdc_Char)0x6e,  /* [2093] */
    (xdc_Char)0x20,  /* [2094] */
    (xdc_Char)0x70,  /* [2095] */
    (xdc_Char)0x61,  /* [2096] */
    (xdc_Char)0x72,  /* [2097] */
    (xdc_Char)0x61,  /* [2098] */
    (xdc_Char)0x6d,  /* [2099] */
    (xdc_Char)0x65,  /* [2100] */
    (xdc_Char)0x74,  /* [2101] */
    (xdc_Char)0x65,  /* [2102] */
    (xdc_Char)0x72,  /* [2103] */
    (xdc_Char)0x20,  /* [2104] */
    (xdc_Char)0x6d,  /* [2105] */
    (xdc_Char)0x75,  /* [2106] */
    (xdc_Char)0x73,  /* [2107] */
    (xdc_Char)0x74,  /* [2108] */
    (xdc_Char)0x20,  /* [2109] */
    (xdc_Char)0x62,  /* [2110] */
    (xdc_Char)0x65,  /* [2111] */
    (xdc_Char)0x20,  /* [2112] */
    (xdc_Char)0x30,  /* [2113] */
    (xdc_Char)0x20,  /* [2114] */
    (xdc_Char)0x6f,  /* [2115] */
    (xdc_Char)0x72,  /* [2116] */
    (xdc_Char)0x20,  /* [2117] */
    (xdc_Char)0x61,  /* [2118] */
    (xdc_Char)0x20,  /* [2119] */
    (xdc_Char)0x70,  /* [2120] */
    (xdc_Char)0x6f,  /* [2121] */
    (xdc_Char)0x77,  /* [2122] */
    (xdc_Char)0x65,  /* [2123] */
    (xdc_Char)0x72,  /* [2124] */
    (xdc_Char)0x20,  /* [2125] */
    (xdc_Char)0x6f,  /* [2126] */
    (xdc_Char)0x66,  /* [2127] */
    (xdc_Char)0x20,  /* [2128] */
    (xdc_Char)0x32,  /* [2129] */
    (xdc_Char)0x20,  /* [2130] */
    (xdc_Char)0x3e,  /* [2131] */
    (xdc_Char)0x3d,  /* [2132] */
    (xdc_Char)0x20,  /* [2133] */
    (xdc_Char)0x74,  /* [2134] */
    (xdc_Char)0x68,  /* [2135] */
    (xdc_Char)0x65,  /* [2136] */
    (xdc_Char)0x20,  /* [2137] */
    (xdc_Char)0x76,  /* [2138] */
    (xdc_Char)0x61,  /* [2139] */
    (xdc_Char)0x6c,  /* [2140] */
    (xdc_Char)0x75,  /* [2141] */
    (xdc_Char)0x65,  /* [2142] */
    (xdc_Char)0x20,  /* [2143] */
    (xdc_Char)0x6f,  /* [2144] */
    (xdc_Char)0x66,  /* [2145] */
    (xdc_Char)0x20,  /* [2146] */
    (xdc_Char)0x4d,  /* [2147] */
    (xdc_Char)0x65,  /* [2148] */
    (xdc_Char)0x6d,  /* [2149] */
    (xdc_Char)0x6f,  /* [2150] */
    (xdc_Char)0x72,  /* [2151] */
    (xdc_Char)0x79,  /* [2152] */
    (xdc_Char)0x5f,  /* [2153] */
    (xdc_Char)0x67,  /* [2154] */
    (xdc_Char)0x65,  /* [2155] */
    (xdc_Char)0x74,  /* [2156] */
    (xdc_Char)0x4d,  /* [2157] */
    (xdc_Char)0x61,  /* [2158] */
    (xdc_Char)0x78,  /* [2159] */
    (xdc_Char)0x44,  /* [2160] */
    (xdc_Char)0x65,  /* [2161] */
    (xdc_Char)0x66,  /* [2162] */
    (xdc_Char)0x61,  /* [2163] */
    (xdc_Char)0x75,  /* [2164] */
    (xdc_Char)0x6c,  /* [2165] */
    (xdc_Char)0x74,  /* [2166] */
    (xdc_Char)0x54,  /* [2167] */
    (xdc_Char)0x79,  /* [2168] */
    (xdc_Char)0x70,  /* [2169] */
    (xdc_Char)0x65,  /* [2170] */
    (xdc_Char)0x41,  /* [2171] */
    (xdc_Char)0x6c,  /* [2172] */
    (xdc_Char)0x69,  /* [2173] */
    (xdc_Char)0x67,  /* [2174] */
    (xdc_Char)0x6e,  /* [2175] */
    (xdc_Char)0x28,  /* [2176] */
    (xdc_Char)0x29,  /* [2177] */
    (xdc_Char)0x0,  /* [2178] */
    (xdc_Char)0x61,  /* [2179] */
    (xdc_Char)0x6c,  /* [2180] */
    (xdc_Char)0x69,  /* [2181] */
    (xdc_Char)0x67,  /* [2182] */
    (xdc_Char)0x6e,  /* [2183] */
    (xdc_Char)0x20,  /* [2184] */
    (xdc_Char)0x70,  /* [2185] */
    (xdc_Char)0x61,  /* [2186] */
    (xdc_Char)0x72,  /* [2187] */
    (xdc_Char)0x61,  /* [2188] */
    (xdc_Char)0x6d,  /* [2189] */
    (xdc_Char)0x65,  /* [2190] */
    (xdc_Char)0x74,  /* [2191] */
    (xdc_Char)0x65,  /* [2192] */
    (xdc_Char)0x72,  /* [2193] */
    (xdc_Char)0x20,  /* [2194] */
    (xdc_Char)0x31,  /* [2195] */
    (xdc_Char)0x29,  /* [2196] */
    (xdc_Char)0x20,  /* [2197] */
    (xdc_Char)0x6d,  /* [2198] */
    (xdc_Char)0x75,  /* [2199] */
    (xdc_Char)0x73,  /* [2200] */
    (xdc_Char)0x74,  /* [2201] */
    (xdc_Char)0x20,  /* [2202] */
    (xdc_Char)0x62,  /* [2203] */
    (xdc_Char)0x65,  /* [2204] */
    (xdc_Char)0x20,  /* [2205] */
    (xdc_Char)0x30,  /* [2206] */
    (xdc_Char)0x20,  /* [2207] */
    (xdc_Char)0x6f,  /* [2208] */
    (xdc_Char)0x72,  /* [2209] */
    (xdc_Char)0x20,  /* [2210] */
    (xdc_Char)0x61,  /* [2211] */
    (xdc_Char)0x20,  /* [2212] */
    (xdc_Char)0x70,  /* [2213] */
    (xdc_Char)0x6f,  /* [2214] */
    (xdc_Char)0x77,  /* [2215] */
    (xdc_Char)0x65,  /* [2216] */
    (xdc_Char)0x72,  /* [2217] */
    (xdc_Char)0x20,  /* [2218] */
    (xdc_Char)0x6f,  /* [2219] */
    (xdc_Char)0x66,  /* [2220] */
    (xdc_Char)0x20,  /* [2221] */
    (xdc_Char)0x32,  /* [2222] */
    (xdc_Char)0x20,  /* [2223] */
    (xdc_Char)0x61,  /* [2224] */
    (xdc_Char)0x6e,  /* [2225] */
    (xdc_Char)0x64,  /* [2226] */
    (xdc_Char)0x20,  /* [2227] */
    (xdc_Char)0x32,  /* [2228] */
    (xdc_Char)0x29,  /* [2229] */
    (xdc_Char)0x20,  /* [2230] */
    (xdc_Char)0x6e,  /* [2231] */
    (xdc_Char)0x6f,  /* [2232] */
    (xdc_Char)0x74,  /* [2233] */
    (xdc_Char)0x20,  /* [2234] */
    (xdc_Char)0x67,  /* [2235] */
    (xdc_Char)0x72,  /* [2236] */
    (xdc_Char)0x65,  /* [2237] */
    (xdc_Char)0x61,  /* [2238] */
    (xdc_Char)0x74,  /* [2239] */
    (xdc_Char)0x65,  /* [2240] */
    (xdc_Char)0x72,  /* [2241] */
    (xdc_Char)0x20,  /* [2242] */
    (xdc_Char)0x74,  /* [2243] */
    (xdc_Char)0x68,  /* [2244] */
    (xdc_Char)0x61,  /* [2245] */
    (xdc_Char)0x6e,  /* [2246] */
    (xdc_Char)0x20,  /* [2247] */
    (xdc_Char)0x74,  /* [2248] */
    (xdc_Char)0x68,  /* [2249] */
    (xdc_Char)0x65,  /* [2250] */
    (xdc_Char)0x20,  /* [2251] */
    (xdc_Char)0x68,  /* [2252] */
    (xdc_Char)0x65,  /* [2253] */
    (xdc_Char)0x61,  /* [2254] */
    (xdc_Char)0x70,  /* [2255] */
    (xdc_Char)0x73,  /* [2256] */
    (xdc_Char)0x20,  /* [2257] */
    (xdc_Char)0x61,  /* [2258] */
    (xdc_Char)0x6c,  /* [2259] */
    (xdc_Char)0x69,  /* [2260] */
    (xdc_Char)0x67,  /* [2261] */
    (xdc_Char)0x6e,  /* [2262] */
    (xdc_Char)0x6d,  /* [2263] */
    (xdc_Char)0x65,  /* [2264] */
    (xdc_Char)0x6e,  /* [2265] */
    (xdc_Char)0x74,  /* [2266] */
    (xdc_Char)0x0,  /* [2267] */
    (xdc_Char)0x62,  /* [2268] */
    (xdc_Char)0x6c,  /* [2269] */
    (xdc_Char)0x6f,  /* [2270] */
    (xdc_Char)0x63,  /* [2271] */
    (xdc_Char)0x6b,  /* [2272] */
    (xdc_Char)0x53,  /* [2273] */
    (xdc_Char)0x69,  /* [2274] */
    (xdc_Char)0x7a,  /* [2275] */
    (xdc_Char)0x65,  /* [2276] */
    (xdc_Char)0x20,  /* [2277] */
    (xdc_Char)0x63,  /* [2278] */
    (xdc_Char)0x61,  /* [2279] */
    (xdc_Char)0x6e,  /* [2280] */
    (xdc_Char)0x6e,  /* [2281] */
    (xdc_Char)0x6f,  /* [2282] */
    (xdc_Char)0x74,  /* [2283] */
    (xdc_Char)0x20,  /* [2284] */
    (xdc_Char)0x62,  /* [2285] */
    (xdc_Char)0x65,  /* [2286] */
    (xdc_Char)0x20,  /* [2287] */
    (xdc_Char)0x7a,  /* [2288] */
    (xdc_Char)0x65,  /* [2289] */
    (xdc_Char)0x72,  /* [2290] */
    (xdc_Char)0x6f,  /* [2291] */
    (xdc_Char)0x0,  /* [2292] */
    (xdc_Char)0x6e,  /* [2293] */
    (xdc_Char)0x75,  /* [2294] */
    (xdc_Char)0x6d,  /* [2295] */
    (xdc_Char)0x42,  /* [2296] */
    (xdc_Char)0x6c,  /* [2297] */
    (xdc_Char)0x6f,  /* [2298] */
    (xdc_Char)0x63,  /* [2299] */
    (xdc_Char)0x6b,  /* [2300] */
    (xdc_Char)0x73,  /* [2301] */
    (xdc_Char)0x20,  /* [2302] */
    (xdc_Char)0x63,  /* [2303] */
    (xdc_Char)0x61,  /* [2304] */
    (xdc_Char)0x6e,  /* [2305] */
    (xdc_Char)0x6e,  /* [2306] */
    (xdc_Char)0x6f,  /* [2307] */
    (xdc_Char)0x74,  /* [2308] */
    (xdc_Char)0x20,  /* [2309] */
    (xdc_Char)0x62,  /* [2310] */
    (xdc_Char)0x65,  /* [2311] */
    (xdc_Char)0x20,  /* [2312] */
    (xdc_Char)0x7a,  /* [2313] */
    (xdc_Char)0x65,  /* [2314] */
    (xdc_Char)0x72,  /* [2315] */
    (xdc_Char)0x6f,  /* [2316] */
    (xdc_Char)0x0,  /* [2317] */
    (xdc_Char)0x62,  /* [2318] */
    (xdc_Char)0x75,  /* [2319] */
    (xdc_Char)0x66,  /* [2320] */
    (xdc_Char)0x53,  /* [2321] */
    (xdc_Char)0x69,  /* [2322] */
    (xdc_Char)0x7a,  /* [2323] */
    (xdc_Char)0x65,  /* [2324] */
    (xdc_Char)0x20,  /* [2325] */
    (xdc_Char)0x63,  /* [2326] */
    (xdc_Char)0x61,  /* [2327] */
    (xdc_Char)0x6e,  /* [2328] */
    (xdc_Char)0x6e,  /* [2329] */
    (xdc_Char)0x6f,  /* [2330] */
    (xdc_Char)0x74,  /* [2331] */
    (xdc_Char)0x20,  /* [2332] */
    (xdc_Char)0x62,  /* [2333] */
    (xdc_Char)0x65,  /* [2334] */
    (xdc_Char)0x20,  /* [2335] */
    (xdc_Char)0x7a,  /* [2336] */
    (xdc_Char)0x65,  /* [2337] */
    (xdc_Char)0x72,  /* [2338] */
    (xdc_Char)0x6f,  /* [2339] */
    (xdc_Char)0x0,  /* [2340] */
    (xdc_Char)0x48,  /* [2341] */
    (xdc_Char)0x65,  /* [2342] */
    (xdc_Char)0x61,  /* [2343] */
    (xdc_Char)0x70,  /* [2344] */
    (xdc_Char)0x42,  /* [2345] */
    (xdc_Char)0x75,  /* [2346] */
    (xdc_Char)0x66,  /* [2347] */
    (xdc_Char)0x5f,  /* [2348] */
    (xdc_Char)0x63,  /* [2349] */
    (xdc_Char)0x72,  /* [2350] */
    (xdc_Char)0x65,  /* [2351] */
    (xdc_Char)0x61,  /* [2352] */
    (xdc_Char)0x74,  /* [2353] */
    (xdc_Char)0x65,  /* [2354] */
    (xdc_Char)0x27,  /* [2355] */
    (xdc_Char)0x73,  /* [2356] */
    (xdc_Char)0x20,  /* [2357] */
    (xdc_Char)0x62,  /* [2358] */
    (xdc_Char)0x75,  /* [2359] */
    (xdc_Char)0x66,  /* [2360] */
    (xdc_Char)0x53,  /* [2361] */
    (xdc_Char)0x69,  /* [2362] */
    (xdc_Char)0x7a,  /* [2363] */
    (xdc_Char)0x65,  /* [2364] */
    (xdc_Char)0x20,  /* [2365] */
    (xdc_Char)0x70,  /* [2366] */
    (xdc_Char)0x61,  /* [2367] */
    (xdc_Char)0x72,  /* [2368] */
    (xdc_Char)0x61,  /* [2369] */
    (xdc_Char)0x6d,  /* [2370] */
    (xdc_Char)0x65,  /* [2371] */
    (xdc_Char)0x74,  /* [2372] */
    (xdc_Char)0x65,  /* [2373] */
    (xdc_Char)0x72,  /* [2374] */
    (xdc_Char)0x20,  /* [2375] */
    (xdc_Char)0x69,  /* [2376] */
    (xdc_Char)0x73,  /* [2377] */
    (xdc_Char)0x20,  /* [2378] */
    (xdc_Char)0x69,  /* [2379] */
    (xdc_Char)0x6e,  /* [2380] */
    (xdc_Char)0x76,  /* [2381] */
    (xdc_Char)0x61,  /* [2382] */
    (xdc_Char)0x6c,  /* [2383] */
    (xdc_Char)0x69,  /* [2384] */
    (xdc_Char)0x64,  /* [2385] */
    (xdc_Char)0x20,  /* [2386] */
    (xdc_Char)0x28,  /* [2387] */
    (xdc_Char)0x74,  /* [2388] */
    (xdc_Char)0x6f,  /* [2389] */
    (xdc_Char)0x6f,  /* [2390] */
    (xdc_Char)0x20,  /* [2391] */
    (xdc_Char)0x73,  /* [2392] */
    (xdc_Char)0x6d,  /* [2393] */
    (xdc_Char)0x61,  /* [2394] */
    (xdc_Char)0x6c,  /* [2395] */
    (xdc_Char)0x6c,  /* [2396] */
    (xdc_Char)0x29,  /* [2397] */
    (xdc_Char)0x0,  /* [2398] */
    (xdc_Char)0x43,  /* [2399] */
    (xdc_Char)0x61,  /* [2400] */
    (xdc_Char)0x6e,  /* [2401] */
    (xdc_Char)0x6e,  /* [2402] */
    (xdc_Char)0x6f,  /* [2403] */
    (xdc_Char)0x74,  /* [2404] */
    (xdc_Char)0x20,  /* [2405] */
    (xdc_Char)0x63,  /* [2406] */
    (xdc_Char)0x61,  /* [2407] */
    (xdc_Char)0x6c,  /* [2408] */
    (xdc_Char)0x6c,  /* [2409] */
    (xdc_Char)0x20,  /* [2410] */
    (xdc_Char)0x48,  /* [2411] */
    (xdc_Char)0x65,  /* [2412] */
    (xdc_Char)0x61,  /* [2413] */
    (xdc_Char)0x70,  /* [2414] */
    (xdc_Char)0x42,  /* [2415] */
    (xdc_Char)0x75,  /* [2416] */
    (xdc_Char)0x66,  /* [2417] */
    (xdc_Char)0x5f,  /* [2418] */
    (xdc_Char)0x66,  /* [2419] */
    (xdc_Char)0x72,  /* [2420] */
    (xdc_Char)0x65,  /* [2421] */
    (xdc_Char)0x65,  /* [2422] */
    (xdc_Char)0x20,  /* [2423] */
    (xdc_Char)0x77,  /* [2424] */
    (xdc_Char)0x68,  /* [2425] */
    (xdc_Char)0x65,  /* [2426] */
    (xdc_Char)0x6e,  /* [2427] */
    (xdc_Char)0x20,  /* [2428] */
    (xdc_Char)0x6e,  /* [2429] */
    (xdc_Char)0x6f,  /* [2430] */
    (xdc_Char)0x20,  /* [2431] */
    (xdc_Char)0x62,  /* [2432] */
    (xdc_Char)0x6c,  /* [2433] */
    (xdc_Char)0x6f,  /* [2434] */
    (xdc_Char)0x63,  /* [2435] */
    (xdc_Char)0x6b,  /* [2436] */
    (xdc_Char)0x73,  /* [2437] */
    (xdc_Char)0x20,  /* [2438] */
    (xdc_Char)0x68,  /* [2439] */
    (xdc_Char)0x61,  /* [2440] */
    (xdc_Char)0x76,  /* [2441] */
    (xdc_Char)0x65,  /* [2442] */
    (xdc_Char)0x20,  /* [2443] */
    (xdc_Char)0x62,  /* [2444] */
    (xdc_Char)0x65,  /* [2445] */
    (xdc_Char)0x65,  /* [2446] */
    (xdc_Char)0x6e,  /* [2447] */
    (xdc_Char)0x20,  /* [2448] */
    (xdc_Char)0x61,  /* [2449] */
    (xdc_Char)0x6c,  /* [2450] */
    (xdc_Char)0x6c,  /* [2451] */
    (xdc_Char)0x6f,  /* [2452] */
    (xdc_Char)0x63,  /* [2453] */
    (xdc_Char)0x61,  /* [2454] */
    (xdc_Char)0x74,  /* [2455] */
    (xdc_Char)0x65,  /* [2456] */
    (xdc_Char)0x64,  /* [2457] */
    (xdc_Char)0x0,  /* [2458] */
    (xdc_Char)0x41,  /* [2459] */
    (xdc_Char)0x5f,  /* [2460] */
    (xdc_Char)0x69,  /* [2461] */
    (xdc_Char)0x6e,  /* [2462] */
    (xdc_Char)0x76,  /* [2463] */
    (xdc_Char)0x61,  /* [2464] */
    (xdc_Char)0x6c,  /* [2465] */
    (xdc_Char)0x69,  /* [2466] */
    (xdc_Char)0x64,  /* [2467] */
    (xdc_Char)0x46,  /* [2468] */
    (xdc_Char)0x72,  /* [2469] */
    (xdc_Char)0x65,  /* [2470] */
    (xdc_Char)0x65,  /* [2471] */
    (xdc_Char)0x3a,  /* [2472] */
    (xdc_Char)0x20,  /* [2473] */
    (xdc_Char)0x49,  /* [2474] */
    (xdc_Char)0x6e,  /* [2475] */
    (xdc_Char)0x76,  /* [2476] */
    (xdc_Char)0x61,  /* [2477] */
    (xdc_Char)0x6c,  /* [2478] */
    (xdc_Char)0x69,  /* [2479] */
    (xdc_Char)0x64,  /* [2480] */
    (xdc_Char)0x20,  /* [2481] */
    (xdc_Char)0x66,  /* [2482] */
    (xdc_Char)0x72,  /* [2483] */
    (xdc_Char)0x65,  /* [2484] */
    (xdc_Char)0x65,  /* [2485] */
    (xdc_Char)0x0,  /* [2486] */
    (xdc_Char)0x41,  /* [2487] */
    (xdc_Char)0x5f,  /* [2488] */
    (xdc_Char)0x7a,  /* [2489] */
    (xdc_Char)0x65,  /* [2490] */
    (xdc_Char)0x72,  /* [2491] */
    (xdc_Char)0x6f,  /* [2492] */
    (xdc_Char)0x42,  /* [2493] */
    (xdc_Char)0x6c,  /* [2494] */
    (xdc_Char)0x6f,  /* [2495] */
    (xdc_Char)0x63,  /* [2496] */
    (xdc_Char)0x6b,  /* [2497] */
    (xdc_Char)0x3a,  /* [2498] */
    (xdc_Char)0x20,  /* [2499] */
    (xdc_Char)0x43,  /* [2500] */
    (xdc_Char)0x61,  /* [2501] */
    (xdc_Char)0x6e,  /* [2502] */
    (xdc_Char)0x6e,  /* [2503] */
    (xdc_Char)0x6f,  /* [2504] */
    (xdc_Char)0x74,  /* [2505] */
    (xdc_Char)0x20,  /* [2506] */
    (xdc_Char)0x61,  /* [2507] */
    (xdc_Char)0x6c,  /* [2508] */
    (xdc_Char)0x6c,  /* [2509] */
    (xdc_Char)0x6f,  /* [2510] */
    (xdc_Char)0x63,  /* [2511] */
    (xdc_Char)0x61,  /* [2512] */
    (xdc_Char)0x74,  /* [2513] */
    (xdc_Char)0x65,  /* [2514] */
    (xdc_Char)0x20,  /* [2515] */
    (xdc_Char)0x73,  /* [2516] */
    (xdc_Char)0x69,  /* [2517] */
    (xdc_Char)0x7a,  /* [2518] */
    (xdc_Char)0x65,  /* [2519] */
    (xdc_Char)0x20,  /* [2520] */
    (xdc_Char)0x30,  /* [2521] */
    (xdc_Char)0x0,  /* [2522] */
    (xdc_Char)0x41,  /* [2523] */
    (xdc_Char)0x5f,  /* [2524] */
    (xdc_Char)0x68,  /* [2525] */
    (xdc_Char)0x65,  /* [2526] */
    (xdc_Char)0x61,  /* [2527] */
    (xdc_Char)0x70,  /* [2528] */
    (xdc_Char)0x53,  /* [2529] */
    (xdc_Char)0x69,  /* [2530] */
    (xdc_Char)0x7a,  /* [2531] */
    (xdc_Char)0x65,  /* [2532] */
    (xdc_Char)0x3a,  /* [2533] */
    (xdc_Char)0x20,  /* [2534] */
    (xdc_Char)0x52,  /* [2535] */
    (xdc_Char)0x65,  /* [2536] */
    (xdc_Char)0x71,  /* [2537] */
    (xdc_Char)0x75,  /* [2538] */
    (xdc_Char)0x65,  /* [2539] */
    (xdc_Char)0x73,  /* [2540] */
    (xdc_Char)0x74,  /* [2541] */
    (xdc_Char)0x65,  /* [2542] */
    (xdc_Char)0x64,  /* [2543] */
    (xdc_Char)0x20,  /* [2544] */
    (xdc_Char)0x68,  /* [2545] */
    (xdc_Char)0x65,  /* [2546] */
    (xdc_Char)0x61,  /* [2547] */
    (xdc_Char)0x70,  /* [2548] */
    (xdc_Char)0x20,  /* [2549] */
    (xdc_Char)0x73,  /* [2550] */
    (xdc_Char)0x69,  /* [2551] */
    (xdc_Char)0x7a,  /* [2552] */
    (xdc_Char)0x65,  /* [2553] */
    (xdc_Char)0x20,  /* [2554] */
    (xdc_Char)0x69,  /* [2555] */
    (xdc_Char)0x73,  /* [2556] */
    (xdc_Char)0x20,  /* [2557] */
    (xdc_Char)0x74,  /* [2558] */
    (xdc_Char)0x6f,  /* [2559] */
    (xdc_Char)0x6f,  /* [2560] */
    (xdc_Char)0x20,  /* [2561] */
    (xdc_Char)0x73,  /* [2562] */
    (xdc_Char)0x6d,  /* [2563] */
    (xdc_Char)0x61,  /* [2564] */
    (xdc_Char)0x6c,  /* [2565] */
    (xdc_Char)0x6c,  /* [2566] */
    (xdc_Char)0x0,  /* [2567] */
    (xdc_Char)0x41,  /* [2568] */
    (xdc_Char)0x5f,  /* [2569] */
    (xdc_Char)0x61,  /* [2570] */
    (xdc_Char)0x6c,  /* [2571] */
    (xdc_Char)0x69,  /* [2572] */
    (xdc_Char)0x67,  /* [2573] */
    (xdc_Char)0x6e,  /* [2574] */
    (xdc_Char)0x3a,  /* [2575] */
    (xdc_Char)0x20,  /* [2576] */
    (xdc_Char)0x52,  /* [2577] */
    (xdc_Char)0x65,  /* [2578] */
    (xdc_Char)0x71,  /* [2579] */
    (xdc_Char)0x75,  /* [2580] */
    (xdc_Char)0x65,  /* [2581] */
    (xdc_Char)0x73,  /* [2582] */
    (xdc_Char)0x74,  /* [2583] */
    (xdc_Char)0x65,  /* [2584] */
    (xdc_Char)0x64,  /* [2585] */
    (xdc_Char)0x20,  /* [2586] */
    (xdc_Char)0x61,  /* [2587] */
    (xdc_Char)0x6c,  /* [2588] */
    (xdc_Char)0x69,  /* [2589] */
    (xdc_Char)0x67,  /* [2590] */
    (xdc_Char)0x6e,  /* [2591] */
    (xdc_Char)0x20,  /* [2592] */
    (xdc_Char)0x69,  /* [2593] */
    (xdc_Char)0x73,  /* [2594] */
    (xdc_Char)0x20,  /* [2595] */
    (xdc_Char)0x6e,  /* [2596] */
    (xdc_Char)0x6f,  /* [2597] */
    (xdc_Char)0x74,  /* [2598] */
    (xdc_Char)0x20,  /* [2599] */
    (xdc_Char)0x61,  /* [2600] */
    (xdc_Char)0x20,  /* [2601] */
    (xdc_Char)0x70,  /* [2602] */
    (xdc_Char)0x6f,  /* [2603] */
    (xdc_Char)0x77,  /* [2604] */
    (xdc_Char)0x65,  /* [2605] */
    (xdc_Char)0x72,  /* [2606] */
    (xdc_Char)0x20,  /* [2607] */
    (xdc_Char)0x6f,  /* [2608] */
    (xdc_Char)0x66,  /* [2609] */
    (xdc_Char)0x20,  /* [2610] */
    (xdc_Char)0x32,  /* [2611] */
    (xdc_Char)0x0,  /* [2612] */
    (xdc_Char)0x49,  /* [2613] */
    (xdc_Char)0x6e,  /* [2614] */
    (xdc_Char)0x76,  /* [2615] */
    (xdc_Char)0x61,  /* [2616] */
    (xdc_Char)0x6c,  /* [2617] */
    (xdc_Char)0x69,  /* [2618] */
    (xdc_Char)0x64,  /* [2619] */
    (xdc_Char)0x20,  /* [2620] */
    (xdc_Char)0x62,  /* [2621] */
    (xdc_Char)0x6c,  /* [2622] */
    (xdc_Char)0x6f,  /* [2623] */
    (xdc_Char)0x63,  /* [2624] */
    (xdc_Char)0x6b,  /* [2625] */
    (xdc_Char)0x20,  /* [2626] */
    (xdc_Char)0x61,  /* [2627] */
    (xdc_Char)0x64,  /* [2628] */
    (xdc_Char)0x64,  /* [2629] */
    (xdc_Char)0x72,  /* [2630] */
    (xdc_Char)0x65,  /* [2631] */
    (xdc_Char)0x73,  /* [2632] */
    (xdc_Char)0x73,  /* [2633] */
    (xdc_Char)0x20,  /* [2634] */
    (xdc_Char)0x6f,  /* [2635] */
    (xdc_Char)0x6e,  /* [2636] */
    (xdc_Char)0x20,  /* [2637] */
    (xdc_Char)0x74,  /* [2638] */
    (xdc_Char)0x68,  /* [2639] */
    (xdc_Char)0x65,  /* [2640] */
    (xdc_Char)0x20,  /* [2641] */
    (xdc_Char)0x66,  /* [2642] */
    (xdc_Char)0x72,  /* [2643] */
    (xdc_Char)0x65,  /* [2644] */
    (xdc_Char)0x65,  /* [2645] */
    (xdc_Char)0x2e,  /* [2646] */
    (xdc_Char)0x20,  /* [2647] */
    (xdc_Char)0x46,  /* [2648] */
    (xdc_Char)0x61,  /* [2649] */
    (xdc_Char)0x69,  /* [2650] */
    (xdc_Char)0x6c,  /* [2651] */
    (xdc_Char)0x65,  /* [2652] */
    (xdc_Char)0x64,  /* [2653] */
    (xdc_Char)0x20,  /* [2654] */
    (xdc_Char)0x74,  /* [2655] */
    (xdc_Char)0x6f,  /* [2656] */
    (xdc_Char)0x20,  /* [2657] */
    (xdc_Char)0x66,  /* [2658] */
    (xdc_Char)0x72,  /* [2659] */
    (xdc_Char)0x65,  /* [2660] */
    (xdc_Char)0x65,  /* [2661] */
    (xdc_Char)0x20,  /* [2662] */
    (xdc_Char)0x62,  /* [2663] */
    (xdc_Char)0x6c,  /* [2664] */
    (xdc_Char)0x6f,  /* [2665] */
    (xdc_Char)0x63,  /* [2666] */
    (xdc_Char)0x6b,  /* [2667] */
    (xdc_Char)0x20,  /* [2668] */
    (xdc_Char)0x62,  /* [2669] */
    (xdc_Char)0x61,  /* [2670] */
    (xdc_Char)0x63,  /* [2671] */
    (xdc_Char)0x6b,  /* [2672] */
    (xdc_Char)0x20,  /* [2673] */
    (xdc_Char)0x74,  /* [2674] */
    (xdc_Char)0x6f,  /* [2675] */
    (xdc_Char)0x20,  /* [2676] */
    (xdc_Char)0x68,  /* [2677] */
    (xdc_Char)0x65,  /* [2678] */
    (xdc_Char)0x61,  /* [2679] */
    (xdc_Char)0x70,  /* [2680] */
    (xdc_Char)0x2e,  /* [2681] */
    (xdc_Char)0x0,  /* [2682] */
    (xdc_Char)0x41,  /* [2683] */
    (xdc_Char)0x5f,  /* [2684] */
    (xdc_Char)0x64,  /* [2685] */
    (xdc_Char)0x6f,  /* [2686] */
    (xdc_Char)0x75,  /* [2687] */
    (xdc_Char)0x62,  /* [2688] */
    (xdc_Char)0x6c,  /* [2689] */
    (xdc_Char)0x65,  /* [2690] */
    (xdc_Char)0x46,  /* [2691] */
    (xdc_Char)0x72,  /* [2692] */
    (xdc_Char)0x65,  /* [2693] */
    (xdc_Char)0x65,  /* [2694] */
    (xdc_Char)0x3a,  /* [2695] */
    (xdc_Char)0x20,  /* [2696] */
    (xdc_Char)0x42,  /* [2697] */
    (xdc_Char)0x75,  /* [2698] */
    (xdc_Char)0x66,  /* [2699] */
    (xdc_Char)0x66,  /* [2700] */
    (xdc_Char)0x65,  /* [2701] */
    (xdc_Char)0x72,  /* [2702] */
    (xdc_Char)0x20,  /* [2703] */
    (xdc_Char)0x61,  /* [2704] */
    (xdc_Char)0x6c,  /* [2705] */
    (xdc_Char)0x72,  /* [2706] */
    (xdc_Char)0x65,  /* [2707] */
    (xdc_Char)0x61,  /* [2708] */
    (xdc_Char)0x64,  /* [2709] */
    (xdc_Char)0x79,  /* [2710] */
    (xdc_Char)0x20,  /* [2711] */
    (xdc_Char)0x66,  /* [2712] */
    (xdc_Char)0x72,  /* [2713] */
    (xdc_Char)0x65,  /* [2714] */
    (xdc_Char)0x65,  /* [2715] */
    (xdc_Char)0x0,  /* [2716] */
    (xdc_Char)0x41,  /* [2717] */
    (xdc_Char)0x5f,  /* [2718] */
    (xdc_Char)0x62,  /* [2719] */
    (xdc_Char)0x75,  /* [2720] */
    (xdc_Char)0x66,  /* [2721] */
    (xdc_Char)0x4f,  /* [2722] */
    (xdc_Char)0x76,  /* [2723] */
    (xdc_Char)0x65,  /* [2724] */
    (xdc_Char)0x72,  /* [2725] */
    (xdc_Char)0x66,  /* [2726] */
    (xdc_Char)0x6c,  /* [2727] */
    (xdc_Char)0x6f,  /* [2728] */
    (xdc_Char)0x77,  /* [2729] */
    (xdc_Char)0x3a,  /* [2730] */
    (xdc_Char)0x20,  /* [2731] */
    (xdc_Char)0x42,  /* [2732] */
    (xdc_Char)0x75,  /* [2733] */
    (xdc_Char)0x66,  /* [2734] */
    (xdc_Char)0x66,  /* [2735] */
    (xdc_Char)0x65,  /* [2736] */
    (xdc_Char)0x72,  /* [2737] */
    (xdc_Char)0x20,  /* [2738] */
    (xdc_Char)0x6f,  /* [2739] */
    (xdc_Char)0x76,  /* [2740] */
    (xdc_Char)0x65,  /* [2741] */
    (xdc_Char)0x72,  /* [2742] */
    (xdc_Char)0x66,  /* [2743] */
    (xdc_Char)0x6c,  /* [2744] */
    (xdc_Char)0x6f,  /* [2745] */
    (xdc_Char)0x77,  /* [2746] */
    (xdc_Char)0x0,  /* [2747] */
    (xdc_Char)0x41,  /* [2748] */
    (xdc_Char)0x5f,  /* [2749] */
    (xdc_Char)0x6e,  /* [2750] */
    (xdc_Char)0x6f,  /* [2751] */
    (xdc_Char)0x74,  /* [2752] */
    (xdc_Char)0x45,  /* [2753] */
    (xdc_Char)0x6d,  /* [2754] */
    (xdc_Char)0x70,  /* [2755] */
    (xdc_Char)0x74,  /* [2756] */
    (xdc_Char)0x79,  /* [2757] */
    (xdc_Char)0x3a,  /* [2758] */
    (xdc_Char)0x20,  /* [2759] */
    (xdc_Char)0x48,  /* [2760] */
    (xdc_Char)0x65,  /* [2761] */
    (xdc_Char)0x61,  /* [2762] */
    (xdc_Char)0x70,  /* [2763] */
    (xdc_Char)0x20,  /* [2764] */
    (xdc_Char)0x6e,  /* [2765] */
    (xdc_Char)0x6f,  /* [2766] */
    (xdc_Char)0x74,  /* [2767] */
    (xdc_Char)0x20,  /* [2768] */
    (xdc_Char)0x65,  /* [2769] */
    (xdc_Char)0x6d,  /* [2770] */
    (xdc_Char)0x70,  /* [2771] */
    (xdc_Char)0x74,  /* [2772] */
    (xdc_Char)0x79,  /* [2773] */
    (xdc_Char)0x0,  /* [2774] */
    (xdc_Char)0x41,  /* [2775] */
    (xdc_Char)0x5f,  /* [2776] */
    (xdc_Char)0x6e,  /* [2777] */
    (xdc_Char)0x75,  /* [2778] */
    (xdc_Char)0x6c,  /* [2779] */
    (xdc_Char)0x6c,  /* [2780] */
    (xdc_Char)0x4f,  /* [2781] */
    (xdc_Char)0x62,  /* [2782] */
    (xdc_Char)0x6a,  /* [2783] */
    (xdc_Char)0x65,  /* [2784] */
    (xdc_Char)0x63,  /* [2785] */
    (xdc_Char)0x74,  /* [2786] */
    (xdc_Char)0x3a,  /* [2787] */
    (xdc_Char)0x20,  /* [2788] */
    (xdc_Char)0x48,  /* [2789] */
    (xdc_Char)0x65,  /* [2790] */
    (xdc_Char)0x61,  /* [2791] */
    (xdc_Char)0x70,  /* [2792] */
    (xdc_Char)0x54,  /* [2793] */
    (xdc_Char)0x72,  /* [2794] */
    (xdc_Char)0x61,  /* [2795] */
    (xdc_Char)0x63,  /* [2796] */
    (xdc_Char)0x6b,  /* [2797] */
    (xdc_Char)0x5f,  /* [2798] */
    (xdc_Char)0x70,  /* [2799] */
    (xdc_Char)0x72,  /* [2800] */
    (xdc_Char)0x69,  /* [2801] */
    (xdc_Char)0x6e,  /* [2802] */
    (xdc_Char)0x74,  /* [2803] */
    (xdc_Char)0x48,  /* [2804] */
    (xdc_Char)0x65,  /* [2805] */
    (xdc_Char)0x61,  /* [2806] */
    (xdc_Char)0x70,  /* [2807] */
    (xdc_Char)0x20,  /* [2808] */
    (xdc_Char)0x63,  /* [2809] */
    (xdc_Char)0x61,  /* [2810] */
    (xdc_Char)0x6c,  /* [2811] */
    (xdc_Char)0x6c,  /* [2812] */
    (xdc_Char)0x65,  /* [2813] */
    (xdc_Char)0x64,  /* [2814] */
    (xdc_Char)0x20,  /* [2815] */
    (xdc_Char)0x77,  /* [2816] */
    (xdc_Char)0x69,  /* [2817] */
    (xdc_Char)0x74,  /* [2818] */
    (xdc_Char)0x68,  /* [2819] */
    (xdc_Char)0x20,  /* [2820] */
    (xdc_Char)0x6e,  /* [2821] */
    (xdc_Char)0x75,  /* [2822] */
    (xdc_Char)0x6c,  /* [2823] */
    (xdc_Char)0x6c,  /* [2824] */
    (xdc_Char)0x20,  /* [2825] */
    (xdc_Char)0x6f,  /* [2826] */
    (xdc_Char)0x62,  /* [2827] */
    (xdc_Char)0x6a,  /* [2828] */
    (xdc_Char)0x0,  /* [2829] */
    (xdc_Char)0x41,  /* [2830] */
    (xdc_Char)0x5f,  /* [2831] */
    (xdc_Char)0x62,  /* [2832] */
    (xdc_Char)0x61,  /* [2833] */
    (xdc_Char)0x64,  /* [2834] */
    (xdc_Char)0x43,  /* [2835] */
    (xdc_Char)0x6f,  /* [2836] */
    (xdc_Char)0x6e,  /* [2837] */
    (xdc_Char)0x74,  /* [2838] */
    (xdc_Char)0x65,  /* [2839] */
    (xdc_Char)0x78,  /* [2840] */
    (xdc_Char)0x74,  /* [2841] */
    (xdc_Char)0x3a,  /* [2842] */
    (xdc_Char)0x20,  /* [2843] */
    (xdc_Char)0x62,  /* [2844] */
    (xdc_Char)0x61,  /* [2845] */
    (xdc_Char)0x64,  /* [2846] */
    (xdc_Char)0x20,  /* [2847] */
    (xdc_Char)0x63,  /* [2848] */
    (xdc_Char)0x61,  /* [2849] */
    (xdc_Char)0x6c,  /* [2850] */
    (xdc_Char)0x6c,  /* [2851] */
    (xdc_Char)0x69,  /* [2852] */
    (xdc_Char)0x6e,  /* [2853] */
    (xdc_Char)0x67,  /* [2854] */
    (xdc_Char)0x20,  /* [2855] */
    (xdc_Char)0x63,  /* [2856] */
    (xdc_Char)0x6f,  /* [2857] */
    (xdc_Char)0x6e,  /* [2858] */
    (xdc_Char)0x74,  /* [2859] */
    (xdc_Char)0x65,  /* [2860] */
    (xdc_Char)0x78,  /* [2861] */
    (xdc_Char)0x74,  /* [2862] */
    (xdc_Char)0x2e,  /* [2863] */
    (xdc_Char)0x20,  /* [2864] */
    (xdc_Char)0x4d,  /* [2865] */
    (xdc_Char)0x61,  /* [2866] */
    (xdc_Char)0x79,  /* [2867] */
    (xdc_Char)0x20,  /* [2868] */
    (xdc_Char)0x6e,  /* [2869] */
    (xdc_Char)0x6f,  /* [2870] */
    (xdc_Char)0x74,  /* [2871] */
    (xdc_Char)0x20,  /* [2872] */
    (xdc_Char)0x62,  /* [2873] */
    (xdc_Char)0x65,  /* [2874] */
    (xdc_Char)0x20,  /* [2875] */
    (xdc_Char)0x65,  /* [2876] */
    (xdc_Char)0x6e,  /* [2877] */
    (xdc_Char)0x74,  /* [2878] */
    (xdc_Char)0x65,  /* [2879] */
    (xdc_Char)0x72,  /* [2880] */
    (xdc_Char)0x65,  /* [2881] */
    (xdc_Char)0x64,  /* [2882] */
    (xdc_Char)0x20,  /* [2883] */
    (xdc_Char)0x66,  /* [2884] */
    (xdc_Char)0x72,  /* [2885] */
    (xdc_Char)0x6f,  /* [2886] */
    (xdc_Char)0x6d,  /* [2887] */
    (xdc_Char)0x20,  /* [2888] */
    (xdc_Char)0x61,  /* [2889] */
    (xdc_Char)0x20,  /* [2890] */
    (xdc_Char)0x68,  /* [2891] */
    (xdc_Char)0x61,  /* [2892] */
    (xdc_Char)0x72,  /* [2893] */
    (xdc_Char)0x64,  /* [2894] */
    (xdc_Char)0x77,  /* [2895] */
    (xdc_Char)0x61,  /* [2896] */
    (xdc_Char)0x72,  /* [2897] */
    (xdc_Char)0x65,  /* [2898] */
    (xdc_Char)0x20,  /* [2899] */
    (xdc_Char)0x69,  /* [2900] */
    (xdc_Char)0x6e,  /* [2901] */
    (xdc_Char)0x74,  /* [2902] */
    (xdc_Char)0x65,  /* [2903] */
    (xdc_Char)0x72,  /* [2904] */
    (xdc_Char)0x72,  /* [2905] */
    (xdc_Char)0x75,  /* [2906] */
    (xdc_Char)0x70,  /* [2907] */
    (xdc_Char)0x74,  /* [2908] */
    (xdc_Char)0x20,  /* [2909] */
    (xdc_Char)0x74,  /* [2910] */
    (xdc_Char)0x68,  /* [2911] */
    (xdc_Char)0x72,  /* [2912] */
    (xdc_Char)0x65,  /* [2913] */
    (xdc_Char)0x61,  /* [2914] */
    (xdc_Char)0x64,  /* [2915] */
    (xdc_Char)0x2e,  /* [2916] */
    (xdc_Char)0x0,  /* [2917] */
    (xdc_Char)0x41,  /* [2918] */
    (xdc_Char)0x5f,  /* [2919] */
    (xdc_Char)0x62,  /* [2920] */
    (xdc_Char)0x61,  /* [2921] */
    (xdc_Char)0x64,  /* [2922] */
    (xdc_Char)0x43,  /* [2923] */
    (xdc_Char)0x6f,  /* [2924] */
    (xdc_Char)0x6e,  /* [2925] */
    (xdc_Char)0x74,  /* [2926] */
    (xdc_Char)0x65,  /* [2927] */
    (xdc_Char)0x78,  /* [2928] */
    (xdc_Char)0x74,  /* [2929] */
    (xdc_Char)0x3a,  /* [2930] */
    (xdc_Char)0x20,  /* [2931] */
    (xdc_Char)0x62,  /* [2932] */
    (xdc_Char)0x61,  /* [2933] */
    (xdc_Char)0x64,  /* [2934] */
    (xdc_Char)0x20,  /* [2935] */
    (xdc_Char)0x63,  /* [2936] */
    (xdc_Char)0x61,  /* [2937] */
    (xdc_Char)0x6c,  /* [2938] */
    (xdc_Char)0x6c,  /* [2939] */
    (xdc_Char)0x69,  /* [2940] */
    (xdc_Char)0x6e,  /* [2941] */
    (xdc_Char)0x67,  /* [2942] */
    (xdc_Char)0x20,  /* [2943] */
    (xdc_Char)0x63,  /* [2944] */
    (xdc_Char)0x6f,  /* [2945] */
    (xdc_Char)0x6e,  /* [2946] */
    (xdc_Char)0x74,  /* [2947] */
    (xdc_Char)0x65,  /* [2948] */
    (xdc_Char)0x78,  /* [2949] */
    (xdc_Char)0x74,  /* [2950] */
    (xdc_Char)0x2e,  /* [2951] */
    (xdc_Char)0x20,  /* [2952] */
    (xdc_Char)0x4d,  /* [2953] */
    (xdc_Char)0x61,  /* [2954] */
    (xdc_Char)0x79,  /* [2955] */
    (xdc_Char)0x20,  /* [2956] */
    (xdc_Char)0x6e,  /* [2957] */
    (xdc_Char)0x6f,  /* [2958] */
    (xdc_Char)0x74,  /* [2959] */
    (xdc_Char)0x20,  /* [2960] */
    (xdc_Char)0x62,  /* [2961] */
    (xdc_Char)0x65,  /* [2962] */
    (xdc_Char)0x20,  /* [2963] */
    (xdc_Char)0x65,  /* [2964] */
    (xdc_Char)0x6e,  /* [2965] */
    (xdc_Char)0x74,  /* [2966] */
    (xdc_Char)0x65,  /* [2967] */
    (xdc_Char)0x72,  /* [2968] */
    (xdc_Char)0x65,  /* [2969] */
    (xdc_Char)0x64,  /* [2970] */
    (xdc_Char)0x20,  /* [2971] */
    (xdc_Char)0x66,  /* [2972] */
    (xdc_Char)0x72,  /* [2973] */
    (xdc_Char)0x6f,  /* [2974] */
    (xdc_Char)0x6d,  /* [2975] */
    (xdc_Char)0x20,  /* [2976] */
    (xdc_Char)0x61,  /* [2977] */
    (xdc_Char)0x20,  /* [2978] */
    (xdc_Char)0x73,  /* [2979] */
    (xdc_Char)0x6f,  /* [2980] */
    (xdc_Char)0x66,  /* [2981] */
    (xdc_Char)0x74,  /* [2982] */
    (xdc_Char)0x77,  /* [2983] */
    (xdc_Char)0x61,  /* [2984] */
    (xdc_Char)0x72,  /* [2985] */
    (xdc_Char)0x65,  /* [2986] */
    (xdc_Char)0x20,  /* [2987] */
    (xdc_Char)0x6f,  /* [2988] */
    (xdc_Char)0x72,  /* [2989] */
    (xdc_Char)0x20,  /* [2990] */
    (xdc_Char)0x68,  /* [2991] */
    (xdc_Char)0x61,  /* [2992] */
    (xdc_Char)0x72,  /* [2993] */
    (xdc_Char)0x64,  /* [2994] */
    (xdc_Char)0x77,  /* [2995] */
    (xdc_Char)0x61,  /* [2996] */
    (xdc_Char)0x72,  /* [2997] */
    (xdc_Char)0x65,  /* [2998] */
    (xdc_Char)0x20,  /* [2999] */
    (xdc_Char)0x69,  /* [3000] */
    (xdc_Char)0x6e,  /* [3001] */
    (xdc_Char)0x74,  /* [3002] */
    (xdc_Char)0x65,  /* [3003] */
    (xdc_Char)0x72,  /* [3004] */
    (xdc_Char)0x72,  /* [3005] */
    (xdc_Char)0x75,  /* [3006] */
    (xdc_Char)0x70,  /* [3007] */
    (xdc_Char)0x74,  /* [3008] */
    (xdc_Char)0x20,  /* [3009] */
    (xdc_Char)0x74,  /* [3010] */
    (xdc_Char)0x68,  /* [3011] */
    (xdc_Char)0x72,  /* [3012] */
    (xdc_Char)0x65,  /* [3013] */
    (xdc_Char)0x61,  /* [3014] */
    (xdc_Char)0x64,  /* [3015] */
    (xdc_Char)0x2e,  /* [3016] */
    (xdc_Char)0x0,  /* [3017] */
    (xdc_Char)0x41,  /* [3018] */
    (xdc_Char)0x5f,  /* [3019] */
    (xdc_Char)0x62,  /* [3020] */
    (xdc_Char)0x61,  /* [3021] */
    (xdc_Char)0x64,  /* [3022] */
    (xdc_Char)0x43,  /* [3023] */
    (xdc_Char)0x6f,  /* [3024] */
    (xdc_Char)0x6e,  /* [3025] */
    (xdc_Char)0x74,  /* [3026] */
    (xdc_Char)0x65,  /* [3027] */
    (xdc_Char)0x78,  /* [3028] */
    (xdc_Char)0x74,  /* [3029] */
    (xdc_Char)0x3a,  /* [3030] */
    (xdc_Char)0x20,  /* [3031] */
    (xdc_Char)0x62,  /* [3032] */
    (xdc_Char)0x61,  /* [3033] */
    (xdc_Char)0x64,  /* [3034] */
    (xdc_Char)0x20,  /* [3035] */
    (xdc_Char)0x63,  /* [3036] */
    (xdc_Char)0x61,  /* [3037] */
    (xdc_Char)0x6c,  /* [3038] */
    (xdc_Char)0x6c,  /* [3039] */
    (xdc_Char)0x69,  /* [3040] */
    (xdc_Char)0x6e,  /* [3041] */
    (xdc_Char)0x67,  /* [3042] */
    (xdc_Char)0x20,  /* [3043] */
    (xdc_Char)0x63,  /* [3044] */
    (xdc_Char)0x6f,  /* [3045] */
    (xdc_Char)0x6e,  /* [3046] */
    (xdc_Char)0x74,  /* [3047] */
    (xdc_Char)0x65,  /* [3048] */
    (xdc_Char)0x78,  /* [3049] */
    (xdc_Char)0x74,  /* [3050] */
    (xdc_Char)0x2e,  /* [3051] */
    (xdc_Char)0x20,  /* [3052] */
    (xdc_Char)0x53,  /* [3053] */
    (xdc_Char)0x65,  /* [3054] */
    (xdc_Char)0x65,  /* [3055] */
    (xdc_Char)0x20,  /* [3056] */
    (xdc_Char)0x47,  /* [3057] */
    (xdc_Char)0x61,  /* [3058] */
    (xdc_Char)0x74,  /* [3059] */
    (xdc_Char)0x65,  /* [3060] */
    (xdc_Char)0x4d,  /* [3061] */
    (xdc_Char)0x75,  /* [3062] */
    (xdc_Char)0x74,  /* [3063] */
    (xdc_Char)0x65,  /* [3064] */
    (xdc_Char)0x78,  /* [3065] */
    (xdc_Char)0x50,  /* [3066] */
    (xdc_Char)0x72,  /* [3067] */
    (xdc_Char)0x69,  /* [3068] */
    (xdc_Char)0x20,  /* [3069] */
    (xdc_Char)0x41,  /* [3070] */
    (xdc_Char)0x50,  /* [3071] */
    (xdc_Char)0x49,  /* [3072] */
    (xdc_Char)0x20,  /* [3073] */
    (xdc_Char)0x64,  /* [3074] */
    (xdc_Char)0x6f,  /* [3075] */
    (xdc_Char)0x63,  /* [3076] */
    (xdc_Char)0x20,  /* [3077] */
    (xdc_Char)0x66,  /* [3078] */
    (xdc_Char)0x6f,  /* [3079] */
    (xdc_Char)0x72,  /* [3080] */
    (xdc_Char)0x20,  /* [3081] */
    (xdc_Char)0x64,  /* [3082] */
    (xdc_Char)0x65,  /* [3083] */
    (xdc_Char)0x74,  /* [3084] */
    (xdc_Char)0x61,  /* [3085] */
    (xdc_Char)0x69,  /* [3086] */
    (xdc_Char)0x6c,  /* [3087] */
    (xdc_Char)0x73,  /* [3088] */
    (xdc_Char)0x2e,  /* [3089] */
    (xdc_Char)0x0,  /* [3090] */
    (xdc_Char)0x41,  /* [3091] */
    (xdc_Char)0x5f,  /* [3092] */
    (xdc_Char)0x65,  /* [3093] */
    (xdc_Char)0x6e,  /* [3094] */
    (xdc_Char)0x74,  /* [3095] */
    (xdc_Char)0x65,  /* [3096] */
    (xdc_Char)0x72,  /* [3097] */
    (xdc_Char)0x54,  /* [3098] */
    (xdc_Char)0x61,  /* [3099] */
    (xdc_Char)0x73,  /* [3100] */
    (xdc_Char)0x6b,  /* [3101] */
    (xdc_Char)0x44,  /* [3102] */
    (xdc_Char)0x69,  /* [3103] */
    (xdc_Char)0x73,  /* [3104] */
    (xdc_Char)0x61,  /* [3105] */
    (xdc_Char)0x62,  /* [3106] */
    (xdc_Char)0x6c,  /* [3107] */
    (xdc_Char)0x65,  /* [3108] */
    (xdc_Char)0x64,  /* [3109] */
    (xdc_Char)0x3a,  /* [3110] */
    (xdc_Char)0x20,  /* [3111] */
    (xdc_Char)0x43,  /* [3112] */
    (xdc_Char)0x61,  /* [3113] */
    (xdc_Char)0x6e,  /* [3114] */
    (xdc_Char)0x6e,  /* [3115] */
    (xdc_Char)0x6f,  /* [3116] */
    (xdc_Char)0x74,  /* [3117] */
    (xdc_Char)0x20,  /* [3118] */
    (xdc_Char)0x63,  /* [3119] */
    (xdc_Char)0x61,  /* [3120] */
    (xdc_Char)0x6c,  /* [3121] */
    (xdc_Char)0x6c,  /* [3122] */
    (xdc_Char)0x20,  /* [3123] */
    (xdc_Char)0x47,  /* [3124] */
    (xdc_Char)0x61,  /* [3125] */
    (xdc_Char)0x74,  /* [3126] */
    (xdc_Char)0x65,  /* [3127] */
    (xdc_Char)0x4d,  /* [3128] */
    (xdc_Char)0x75,  /* [3129] */
    (xdc_Char)0x74,  /* [3130] */
    (xdc_Char)0x65,  /* [3131] */
    (xdc_Char)0x78,  /* [3132] */
    (xdc_Char)0x50,  /* [3133] */
    (xdc_Char)0x72,  /* [3134] */
    (xdc_Char)0x69,  /* [3135] */
    (xdc_Char)0x5f,  /* [3136] */
    (xdc_Char)0x65,  /* [3137] */
    (xdc_Char)0x6e,  /* [3138] */
    (xdc_Char)0x74,  /* [3139] */
    (xdc_Char)0x65,  /* [3140] */
    (xdc_Char)0x72,  /* [3141] */
    (xdc_Char)0x28,  /* [3142] */
    (xdc_Char)0x29,  /* [3143] */
    (xdc_Char)0x20,  /* [3144] */
    (xdc_Char)0x77,  /* [3145] */
    (xdc_Char)0x68,  /* [3146] */
    (xdc_Char)0x69,  /* [3147] */
    (xdc_Char)0x6c,  /* [3148] */
    (xdc_Char)0x65,  /* [3149] */
    (xdc_Char)0x20,  /* [3150] */
    (xdc_Char)0x74,  /* [3151] */
    (xdc_Char)0x68,  /* [3152] */
    (xdc_Char)0x65,  /* [3153] */
    (xdc_Char)0x20,  /* [3154] */
    (xdc_Char)0x54,  /* [3155] */
    (xdc_Char)0x61,  /* [3156] */
    (xdc_Char)0x73,  /* [3157] */
    (xdc_Char)0x6b,  /* [3158] */
    (xdc_Char)0x20,  /* [3159] */
    (xdc_Char)0x6f,  /* [3160] */
    (xdc_Char)0x72,  /* [3161] */
    (xdc_Char)0x20,  /* [3162] */
    (xdc_Char)0x53,  /* [3163] */
    (xdc_Char)0x77,  /* [3164] */
    (xdc_Char)0x69,  /* [3165] */
    (xdc_Char)0x20,  /* [3166] */
    (xdc_Char)0x73,  /* [3167] */
    (xdc_Char)0x63,  /* [3168] */
    (xdc_Char)0x68,  /* [3169] */
    (xdc_Char)0x65,  /* [3170] */
    (xdc_Char)0x64,  /* [3171] */
    (xdc_Char)0x75,  /* [3172] */
    (xdc_Char)0x6c,  /* [3173] */
    (xdc_Char)0x65,  /* [3174] */
    (xdc_Char)0x72,  /* [3175] */
    (xdc_Char)0x20,  /* [3176] */
    (xdc_Char)0x69,  /* [3177] */
    (xdc_Char)0x73,  /* [3178] */
    (xdc_Char)0x20,  /* [3179] */
    (xdc_Char)0x64,  /* [3180] */
    (xdc_Char)0x69,  /* [3181] */
    (xdc_Char)0x73,  /* [3182] */
    (xdc_Char)0x61,  /* [3183] */
    (xdc_Char)0x62,  /* [3184] */
    (xdc_Char)0x6c,  /* [3185] */
    (xdc_Char)0x65,  /* [3186] */
    (xdc_Char)0x64,  /* [3187] */
    (xdc_Char)0x2e,  /* [3188] */
    (xdc_Char)0x0,  /* [3189] */
    (xdc_Char)0x41,  /* [3190] */
    (xdc_Char)0x5f,  /* [3191] */
    (xdc_Char)0x62,  /* [3192] */
    (xdc_Char)0x61,  /* [3193] */
    (xdc_Char)0x64,  /* [3194] */
    (xdc_Char)0x43,  /* [3195] */
    (xdc_Char)0x6f,  /* [3196] */
    (xdc_Char)0x6e,  /* [3197] */
    (xdc_Char)0x74,  /* [3198] */
    (xdc_Char)0x65,  /* [3199] */
    (xdc_Char)0x78,  /* [3200] */
    (xdc_Char)0x74,  /* [3201] */
    (xdc_Char)0x3a,  /* [3202] */
    (xdc_Char)0x20,  /* [3203] */
    (xdc_Char)0x62,  /* [3204] */
    (xdc_Char)0x61,  /* [3205] */
    (xdc_Char)0x64,  /* [3206] */
    (xdc_Char)0x20,  /* [3207] */
    (xdc_Char)0x63,  /* [3208] */
    (xdc_Char)0x61,  /* [3209] */
    (xdc_Char)0x6c,  /* [3210] */
    (xdc_Char)0x6c,  /* [3211] */
    (xdc_Char)0x69,  /* [3212] */
    (xdc_Char)0x6e,  /* [3213] */
    (xdc_Char)0x67,  /* [3214] */
    (xdc_Char)0x20,  /* [3215] */
    (xdc_Char)0x63,  /* [3216] */
    (xdc_Char)0x6f,  /* [3217] */
    (xdc_Char)0x6e,  /* [3218] */
    (xdc_Char)0x74,  /* [3219] */
    (xdc_Char)0x65,  /* [3220] */
    (xdc_Char)0x78,  /* [3221] */
    (xdc_Char)0x74,  /* [3222] */
    (xdc_Char)0x2e,  /* [3223] */
    (xdc_Char)0x20,  /* [3224] */
    (xdc_Char)0x53,  /* [3225] */
    (xdc_Char)0x65,  /* [3226] */
    (xdc_Char)0x65,  /* [3227] */
    (xdc_Char)0x20,  /* [3228] */
    (xdc_Char)0x47,  /* [3229] */
    (xdc_Char)0x61,  /* [3230] */
    (xdc_Char)0x74,  /* [3231] */
    (xdc_Char)0x65,  /* [3232] */
    (xdc_Char)0x4d,  /* [3233] */
    (xdc_Char)0x75,  /* [3234] */
    (xdc_Char)0x74,  /* [3235] */
    (xdc_Char)0x65,  /* [3236] */
    (xdc_Char)0x78,  /* [3237] */
    (xdc_Char)0x20,  /* [3238] */
    (xdc_Char)0x41,  /* [3239] */
    (xdc_Char)0x50,  /* [3240] */
    (xdc_Char)0x49,  /* [3241] */
    (xdc_Char)0x20,  /* [3242] */
    (xdc_Char)0x64,  /* [3243] */
    (xdc_Char)0x6f,  /* [3244] */
    (xdc_Char)0x63,  /* [3245] */
    (xdc_Char)0x20,  /* [3246] */
    (xdc_Char)0x66,  /* [3247] */
    (xdc_Char)0x6f,  /* [3248] */
    (xdc_Char)0x72,  /* [3249] */
    (xdc_Char)0x20,  /* [3250] */
    (xdc_Char)0x64,  /* [3251] */
    (xdc_Char)0x65,  /* [3252] */
    (xdc_Char)0x74,  /* [3253] */
    (xdc_Char)0x61,  /* [3254] */
    (xdc_Char)0x69,  /* [3255] */
    (xdc_Char)0x6c,  /* [3256] */
    (xdc_Char)0x73,  /* [3257] */
    (xdc_Char)0x2e,  /* [3258] */
    (xdc_Char)0x0,  /* [3259] */
    (xdc_Char)0x41,  /* [3260] */
    (xdc_Char)0x5f,  /* [3261] */
    (xdc_Char)0x62,  /* [3262] */
    (xdc_Char)0x61,  /* [3263] */
    (xdc_Char)0x64,  /* [3264] */
    (xdc_Char)0x43,  /* [3265] */
    (xdc_Char)0x6f,  /* [3266] */
    (xdc_Char)0x6e,  /* [3267] */
    (xdc_Char)0x74,  /* [3268] */
    (xdc_Char)0x65,  /* [3269] */
    (xdc_Char)0x78,  /* [3270] */
    (xdc_Char)0x74,  /* [3271] */
    (xdc_Char)0x3a,  /* [3272] */
    (xdc_Char)0x20,  /* [3273] */
    (xdc_Char)0x62,  /* [3274] */
    (xdc_Char)0x61,  /* [3275] */
    (xdc_Char)0x64,  /* [3276] */
    (xdc_Char)0x20,  /* [3277] */
    (xdc_Char)0x63,  /* [3278] */
    (xdc_Char)0x61,  /* [3279] */
    (xdc_Char)0x6c,  /* [3280] */
    (xdc_Char)0x6c,  /* [3281] */
    (xdc_Char)0x69,  /* [3282] */
    (xdc_Char)0x6e,  /* [3283] */
    (xdc_Char)0x67,  /* [3284] */
    (xdc_Char)0x20,  /* [3285] */
    (xdc_Char)0x63,  /* [3286] */
    (xdc_Char)0x6f,  /* [3287] */
    (xdc_Char)0x6e,  /* [3288] */
    (xdc_Char)0x74,  /* [3289] */
    (xdc_Char)0x65,  /* [3290] */
    (xdc_Char)0x78,  /* [3291] */
    (xdc_Char)0x74,  /* [3292] */
    (xdc_Char)0x2e,  /* [3293] */
    (xdc_Char)0x20,  /* [3294] */
    (xdc_Char)0x53,  /* [3295] */
    (xdc_Char)0x65,  /* [3296] */
    (xdc_Char)0x65,  /* [3297] */
    (xdc_Char)0x20,  /* [3298] */
    (xdc_Char)0x47,  /* [3299] */
    (xdc_Char)0x61,  /* [3300] */
    (xdc_Char)0x74,  /* [3301] */
    (xdc_Char)0x65,  /* [3302] */
    (xdc_Char)0x53,  /* [3303] */
    (xdc_Char)0x70,  /* [3304] */
    (xdc_Char)0x69,  /* [3305] */
    (xdc_Char)0x6e,  /* [3306] */
    (xdc_Char)0x6c,  /* [3307] */
    (xdc_Char)0x6f,  /* [3308] */
    (xdc_Char)0x63,  /* [3309] */
    (xdc_Char)0x6b,  /* [3310] */
    (xdc_Char)0x20,  /* [3311] */
    (xdc_Char)0x41,  /* [3312] */
    (xdc_Char)0x50,  /* [3313] */
    (xdc_Char)0x49,  /* [3314] */
    (xdc_Char)0x20,  /* [3315] */
    (xdc_Char)0x64,  /* [3316] */
    (xdc_Char)0x6f,  /* [3317] */
    (xdc_Char)0x63,  /* [3318] */
    (xdc_Char)0x20,  /* [3319] */
    (xdc_Char)0x66,  /* [3320] */
    (xdc_Char)0x6f,  /* [3321] */
    (xdc_Char)0x72,  /* [3322] */
    (xdc_Char)0x20,  /* [3323] */
    (xdc_Char)0x64,  /* [3324] */
    (xdc_Char)0x65,  /* [3325] */
    (xdc_Char)0x74,  /* [3326] */
    (xdc_Char)0x61,  /* [3327] */
    (xdc_Char)0x69,  /* [3328] */
    (xdc_Char)0x6c,  /* [3329] */
    (xdc_Char)0x73,  /* [3330] */
    (xdc_Char)0x2e,  /* [3331] */
    (xdc_Char)0x0,  /* [3332] */
    (xdc_Char)0x41,  /* [3333] */
    (xdc_Char)0x5f,  /* [3334] */
    (xdc_Char)0x69,  /* [3335] */
    (xdc_Char)0x6e,  /* [3336] */
    (xdc_Char)0x76,  /* [3337] */
    (xdc_Char)0x61,  /* [3338] */
    (xdc_Char)0x6c,  /* [3339] */
    (xdc_Char)0x69,  /* [3340] */
    (xdc_Char)0x64,  /* [3341] */
    (xdc_Char)0x51,  /* [3342] */
    (xdc_Char)0x75,  /* [3343] */
    (xdc_Char)0x61,  /* [3344] */
    (xdc_Char)0x6c,  /* [3345] */
    (xdc_Char)0x69,  /* [3346] */
    (xdc_Char)0x74,  /* [3347] */
    (xdc_Char)0x79,  /* [3348] */
    (xdc_Char)0x3a,  /* [3349] */
    (xdc_Char)0x20,  /* [3350] */
    (xdc_Char)0x53,  /* [3351] */
    (xdc_Char)0x65,  /* [3352] */
    (xdc_Char)0x65,  /* [3353] */
    (xdc_Char)0x20,  /* [3354] */
    (xdc_Char)0x47,  /* [3355] */
    (xdc_Char)0x61,  /* [3356] */
    (xdc_Char)0x74,  /* [3357] */
    (xdc_Char)0x65,  /* [3358] */
    (xdc_Char)0x53,  /* [3359] */
    (xdc_Char)0x70,  /* [3360] */
    (xdc_Char)0x69,  /* [3361] */
    (xdc_Char)0x6e,  /* [3362] */
    (xdc_Char)0x6c,  /* [3363] */
    (xdc_Char)0x6f,  /* [3364] */
    (xdc_Char)0x63,  /* [3365] */
    (xdc_Char)0x6b,  /* [3366] */
    (xdc_Char)0x20,  /* [3367] */
    (xdc_Char)0x41,  /* [3368] */
    (xdc_Char)0x50,  /* [3369] */
    (xdc_Char)0x49,  /* [3370] */
    (xdc_Char)0x20,  /* [3371] */
    (xdc_Char)0x64,  /* [3372] */
    (xdc_Char)0x6f,  /* [3373] */
    (xdc_Char)0x63,  /* [3374] */
    (xdc_Char)0x20,  /* [3375] */
    (xdc_Char)0x66,  /* [3376] */
    (xdc_Char)0x6f,  /* [3377] */
    (xdc_Char)0x72,  /* [3378] */
    (xdc_Char)0x20,  /* [3379] */
    (xdc_Char)0x64,  /* [3380] */
    (xdc_Char)0x65,  /* [3381] */
    (xdc_Char)0x74,  /* [3382] */
    (xdc_Char)0x61,  /* [3383] */
    (xdc_Char)0x69,  /* [3384] */
    (xdc_Char)0x6c,  /* [3385] */
    (xdc_Char)0x73,  /* [3386] */
    (xdc_Char)0x2e,  /* [3387] */
    (xdc_Char)0x0,  /* [3388] */
    (xdc_Char)0x41,  /* [3389] */
    (xdc_Char)0x5f,  /* [3390] */
    (xdc_Char)0x7a,  /* [3391] */
    (xdc_Char)0x65,  /* [3392] */
    (xdc_Char)0x72,  /* [3393] */
    (xdc_Char)0x6f,  /* [3394] */
    (xdc_Char)0x54,  /* [3395] */
    (xdc_Char)0x69,  /* [3396] */
    (xdc_Char)0x6d,  /* [3397] */
    (xdc_Char)0x65,  /* [3398] */
    (xdc_Char)0x6f,  /* [3399] */
    (xdc_Char)0x75,  /* [3400] */
    (xdc_Char)0x74,  /* [3401] */
    (xdc_Char)0x3a,  /* [3402] */
    (xdc_Char)0x20,  /* [3403] */
    (xdc_Char)0x54,  /* [3404] */
    (xdc_Char)0x69,  /* [3405] */
    (xdc_Char)0x6d,  /* [3406] */
    (xdc_Char)0x65,  /* [3407] */
    (xdc_Char)0x6f,  /* [3408] */
    (xdc_Char)0x75,  /* [3409] */
    (xdc_Char)0x74,  /* [3410] */
    (xdc_Char)0x20,  /* [3411] */
    (xdc_Char)0x76,  /* [3412] */
    (xdc_Char)0x61,  /* [3413] */
    (xdc_Char)0x6c,  /* [3414] */
    (xdc_Char)0x75,  /* [3415] */
    (xdc_Char)0x65,  /* [3416] */
    (xdc_Char)0x20,  /* [3417] */
    (xdc_Char)0x61,  /* [3418] */
    (xdc_Char)0x6e,  /* [3419] */
    (xdc_Char)0x6e,  /* [3420] */
    (xdc_Char)0x6f,  /* [3421] */
    (xdc_Char)0x74,  /* [3422] */
    (xdc_Char)0x20,  /* [3423] */
    (xdc_Char)0x62,  /* [3424] */
    (xdc_Char)0x65,  /* [3425] */
    (xdc_Char)0x20,  /* [3426] */
    (xdc_Char)0x7a,  /* [3427] */
    (xdc_Char)0x65,  /* [3428] */
    (xdc_Char)0x72,  /* [3429] */
    (xdc_Char)0x6f,  /* [3430] */
    (xdc_Char)0x0,  /* [3431] */
    (xdc_Char)0x41,  /* [3432] */
    (xdc_Char)0x5f,  /* [3433] */
    (xdc_Char)0x69,  /* [3434] */
    (xdc_Char)0x6e,  /* [3435] */
    (xdc_Char)0x76,  /* [3436] */
    (xdc_Char)0x61,  /* [3437] */
    (xdc_Char)0x6c,  /* [3438] */
    (xdc_Char)0x69,  /* [3439] */
    (xdc_Char)0x64,  /* [3440] */
    (xdc_Char)0x4b,  /* [3441] */
    (xdc_Char)0x65,  /* [3442] */
    (xdc_Char)0x79,  /* [3443] */
    (xdc_Char)0x3a,  /* [3444] */
    (xdc_Char)0x20,  /* [3445] */
    (xdc_Char)0x74,  /* [3446] */
    (xdc_Char)0x68,  /* [3447] */
    (xdc_Char)0x65,  /* [3448] */
    (xdc_Char)0x20,  /* [3449] */
    (xdc_Char)0x6b,  /* [3450] */
    (xdc_Char)0x65,  /* [3451] */
    (xdc_Char)0x79,  /* [3452] */
    (xdc_Char)0x20,  /* [3453] */
    (xdc_Char)0x6d,  /* [3454] */
    (xdc_Char)0x75,  /* [3455] */
    (xdc_Char)0x73,  /* [3456] */
    (xdc_Char)0x74,  /* [3457] */
    (xdc_Char)0x20,  /* [3458] */
    (xdc_Char)0x62,  /* [3459] */
    (xdc_Char)0x65,  /* [3460] */
    (xdc_Char)0x20,  /* [3461] */
    (xdc_Char)0x73,  /* [3462] */
    (xdc_Char)0x65,  /* [3463] */
    (xdc_Char)0x74,  /* [3464] */
    (xdc_Char)0x20,  /* [3465] */
    (xdc_Char)0x74,  /* [3466] */
    (xdc_Char)0x6f,  /* [3467] */
    (xdc_Char)0x20,  /* [3468] */
    (xdc_Char)0x61,  /* [3469] */
    (xdc_Char)0x20,  /* [3470] */
    (xdc_Char)0x6e,  /* [3471] */
    (xdc_Char)0x6f,  /* [3472] */
    (xdc_Char)0x6e,  /* [3473] */
    (xdc_Char)0x2d,  /* [3474] */
    (xdc_Char)0x64,  /* [3475] */
    (xdc_Char)0x65,  /* [3476] */
    (xdc_Char)0x66,  /* [3477] */
    (xdc_Char)0x61,  /* [3478] */
    (xdc_Char)0x75,  /* [3479] */
    (xdc_Char)0x6c,  /* [3480] */
    (xdc_Char)0x74,  /* [3481] */
    (xdc_Char)0x20,  /* [3482] */
    (xdc_Char)0x76,  /* [3483] */
    (xdc_Char)0x61,  /* [3484] */
    (xdc_Char)0x6c,  /* [3485] */
    (xdc_Char)0x75,  /* [3486] */
    (xdc_Char)0x65,  /* [3487] */
    (xdc_Char)0x0,  /* [3488] */
    (xdc_Char)0x61,  /* [3489] */
    (xdc_Char)0x73,  /* [3490] */
    (xdc_Char)0x73,  /* [3491] */
    (xdc_Char)0x65,  /* [3492] */
    (xdc_Char)0x72,  /* [3493] */
    (xdc_Char)0x74,  /* [3494] */
    (xdc_Char)0x69,  /* [3495] */
    (xdc_Char)0x6f,  /* [3496] */
    (xdc_Char)0x6e,  /* [3497] */
    (xdc_Char)0x20,  /* [3498] */
    (xdc_Char)0x66,  /* [3499] */
    (xdc_Char)0x61,  /* [3500] */
    (xdc_Char)0x69,  /* [3501] */
    (xdc_Char)0x6c,  /* [3502] */
    (xdc_Char)0x75,  /* [3503] */
    (xdc_Char)0x72,  /* [3504] */
    (xdc_Char)0x65,  /* [3505] */
    (xdc_Char)0x25,  /* [3506] */
    (xdc_Char)0x73,  /* [3507] */
    (xdc_Char)0x25,  /* [3508] */
    (xdc_Char)0x73,  /* [3509] */
    (xdc_Char)0x0,  /* [3510] */
    (xdc_Char)0x25,  /* [3511] */
    (xdc_Char)0x24,  /* [3512] */
    (xdc_Char)0x53,  /* [3513] */
    (xdc_Char)0x0,  /* [3514] */
    (xdc_Char)0x6f,  /* [3515] */
    (xdc_Char)0x75,  /* [3516] */
    (xdc_Char)0x74,  /* [3517] */
    (xdc_Char)0x20,  /* [3518] */
    (xdc_Char)0x6f,  /* [3519] */
    (xdc_Char)0x66,  /* [3520] */
    (xdc_Char)0x20,  /* [3521] */
    (xdc_Char)0x6d,  /* [3522] */
    (xdc_Char)0x65,  /* [3523] */
    (xdc_Char)0x6d,  /* [3524] */
    (xdc_Char)0x6f,  /* [3525] */
    (xdc_Char)0x72,  /* [3526] */
    (xdc_Char)0x79,  /* [3527] */
    (xdc_Char)0x3a,  /* [3528] */
    (xdc_Char)0x20,  /* [3529] */
    (xdc_Char)0x68,  /* [3530] */
    (xdc_Char)0x65,  /* [3531] */
    (xdc_Char)0x61,  /* [3532] */
    (xdc_Char)0x70,  /* [3533] */
    (xdc_Char)0x3d,  /* [3534] */
    (xdc_Char)0x30,  /* [3535] */
    (xdc_Char)0x78,  /* [3536] */
    (xdc_Char)0x25,  /* [3537] */
    (xdc_Char)0x78,  /* [3538] */
    (xdc_Char)0x2c,  /* [3539] */
    (xdc_Char)0x20,  /* [3540] */
    (xdc_Char)0x73,  /* [3541] */
    (xdc_Char)0x69,  /* [3542] */
    (xdc_Char)0x7a,  /* [3543] */
    (xdc_Char)0x65,  /* [3544] */
    (xdc_Char)0x3d,  /* [3545] */
    (xdc_Char)0x25,  /* [3546] */
    (xdc_Char)0x75,  /* [3547] */
    (xdc_Char)0x0,  /* [3548] */
    (xdc_Char)0x25,  /* [3549] */
    (xdc_Char)0x73,  /* [3550] */
    (xdc_Char)0x20,  /* [3551] */
    (xdc_Char)0x30,  /* [3552] */
    (xdc_Char)0x78,  /* [3553] */
    (xdc_Char)0x25,  /* [3554] */
    (xdc_Char)0x78,  /* [3555] */
    (xdc_Char)0x0,  /* [3556] */
    (xdc_Char)0x45,  /* [3557] */
    (xdc_Char)0x5f,  /* [3558] */
    (xdc_Char)0x62,  /* [3559] */
    (xdc_Char)0x61,  /* [3560] */
    (xdc_Char)0x64,  /* [3561] */
    (xdc_Char)0x4c,  /* [3562] */
    (xdc_Char)0x65,  /* [3563] */
    (xdc_Char)0x76,  /* [3564] */
    (xdc_Char)0x65,  /* [3565] */
    (xdc_Char)0x6c,  /* [3566] */
    (xdc_Char)0x3a,  /* [3567] */
    (xdc_Char)0x20,  /* [3568] */
    (xdc_Char)0x42,  /* [3569] */
    (xdc_Char)0x61,  /* [3570] */
    (xdc_Char)0x64,  /* [3571] */
    (xdc_Char)0x20,  /* [3572] */
    (xdc_Char)0x66,  /* [3573] */
    (xdc_Char)0x69,  /* [3574] */
    (xdc_Char)0x6c,  /* [3575] */
    (xdc_Char)0x74,  /* [3576] */
    (xdc_Char)0x65,  /* [3577] */
    (xdc_Char)0x72,  /* [3578] */
    (xdc_Char)0x20,  /* [3579] */
    (xdc_Char)0x6c,  /* [3580] */
    (xdc_Char)0x65,  /* [3581] */
    (xdc_Char)0x76,  /* [3582] */
    (xdc_Char)0x65,  /* [3583] */
    (xdc_Char)0x6c,  /* [3584] */
    (xdc_Char)0x20,  /* [3585] */
    (xdc_Char)0x76,  /* [3586] */
    (xdc_Char)0x61,  /* [3587] */
    (xdc_Char)0x6c,  /* [3588] */
    (xdc_Char)0x75,  /* [3589] */
    (xdc_Char)0x65,  /* [3590] */
    (xdc_Char)0x3a,  /* [3591] */
    (xdc_Char)0x20,  /* [3592] */
    (xdc_Char)0x25,  /* [3593] */
    (xdc_Char)0x64,  /* [3594] */
    (xdc_Char)0x0,  /* [3595] */
    (xdc_Char)0x66,  /* [3596] */
    (xdc_Char)0x72,  /* [3597] */
    (xdc_Char)0x65,  /* [3598] */
    (xdc_Char)0x65,  /* [3599] */
    (xdc_Char)0x28,  /* [3600] */
    (xdc_Char)0x29,  /* [3601] */
    (xdc_Char)0x20,  /* [3602] */
    (xdc_Char)0x69,  /* [3603] */
    (xdc_Char)0x6e,  /* [3604] */
    (xdc_Char)0x76,  /* [3605] */
    (xdc_Char)0x61,  /* [3606] */
    (xdc_Char)0x6c,  /* [3607] */
    (xdc_Char)0x69,  /* [3608] */
    (xdc_Char)0x64,  /* [3609] */
    (xdc_Char)0x20,  /* [3610] */
    (xdc_Char)0x69,  /* [3611] */
    (xdc_Char)0x6e,  /* [3612] */
    (xdc_Char)0x20,  /* [3613] */
    (xdc_Char)0x67,  /* [3614] */
    (xdc_Char)0x72,  /* [3615] */
    (xdc_Char)0x6f,  /* [3616] */
    (xdc_Char)0x77,  /* [3617] */
    (xdc_Char)0x74,  /* [3618] */
    (xdc_Char)0x68,  /* [3619] */
    (xdc_Char)0x2d,  /* [3620] */
    (xdc_Char)0x6f,  /* [3621] */
    (xdc_Char)0x6e,  /* [3622] */
    (xdc_Char)0x6c,  /* [3623] */
    (xdc_Char)0x79,  /* [3624] */
    (xdc_Char)0x20,  /* [3625] */
    (xdc_Char)0x48,  /* [3626] */
    (xdc_Char)0x65,  /* [3627] */
    (xdc_Char)0x61,  /* [3628] */
    (xdc_Char)0x70,  /* [3629] */
    (xdc_Char)0x4d,  /* [3630] */
    (xdc_Char)0x69,  /* [3631] */
    (xdc_Char)0x6e,  /* [3632] */
    (xdc_Char)0x0,  /* [3633] */
    (xdc_Char)0x54,  /* [3634] */
    (xdc_Char)0x68,  /* [3635] */
    (xdc_Char)0x65,  /* [3636] */
    (xdc_Char)0x20,  /* [3637] */
    (xdc_Char)0x52,  /* [3638] */
    (xdc_Char)0x54,  /* [3639] */
    (xdc_Char)0x53,  /* [3640] */
    (xdc_Char)0x20,  /* [3641] */
    (xdc_Char)0x68,  /* [3642] */
    (xdc_Char)0x65,  /* [3643] */
    (xdc_Char)0x61,  /* [3644] */
    (xdc_Char)0x70,  /* [3645] */
    (xdc_Char)0x20,  /* [3646] */
    (xdc_Char)0x69,  /* [3647] */
    (xdc_Char)0x73,  /* [3648] */
    (xdc_Char)0x20,  /* [3649] */
    (xdc_Char)0x75,  /* [3650] */
    (xdc_Char)0x73,  /* [3651] */
    (xdc_Char)0x65,  /* [3652] */
    (xdc_Char)0x64,  /* [3653] */
    (xdc_Char)0x20,  /* [3654] */
    (xdc_Char)0x75,  /* [3655] */
    (xdc_Char)0x70,  /* [3656] */
    (xdc_Char)0x2e,  /* [3657] */
    (xdc_Char)0x20,  /* [3658] */
    (xdc_Char)0x45,  /* [3659] */
    (xdc_Char)0x78,  /* [3660] */
    (xdc_Char)0x61,  /* [3661] */
    (xdc_Char)0x6d,  /* [3662] */
    (xdc_Char)0x69,  /* [3663] */
    (xdc_Char)0x6e,  /* [3664] */
    (xdc_Char)0x65,  /* [3665] */
    (xdc_Char)0x20,  /* [3666] */
    (xdc_Char)0x50,  /* [3667] */
    (xdc_Char)0x72,  /* [3668] */
    (xdc_Char)0x6f,  /* [3669] */
    (xdc_Char)0x67,  /* [3670] */
    (xdc_Char)0x72,  /* [3671] */
    (xdc_Char)0x61,  /* [3672] */
    (xdc_Char)0x6d,  /* [3673] */
    (xdc_Char)0x2e,  /* [3674] */
    (xdc_Char)0x68,  /* [3675] */
    (xdc_Char)0x65,  /* [3676] */
    (xdc_Char)0x61,  /* [3677] */
    (xdc_Char)0x70,  /* [3678] */
    (xdc_Char)0x2e,  /* [3679] */
    (xdc_Char)0x0,  /* [3680] */
    (xdc_Char)0x45,  /* [3681] */
    (xdc_Char)0x5f,  /* [3682] */
    (xdc_Char)0x62,  /* [3683] */
    (xdc_Char)0x61,  /* [3684] */
    (xdc_Char)0x64,  /* [3685] */
    (xdc_Char)0x43,  /* [3686] */
    (xdc_Char)0x6f,  /* [3687] */
    (xdc_Char)0x6d,  /* [3688] */
    (xdc_Char)0x6d,  /* [3689] */
    (xdc_Char)0x61,  /* [3690] */
    (xdc_Char)0x6e,  /* [3691] */
    (xdc_Char)0x64,  /* [3692] */
    (xdc_Char)0x3a,  /* [3693] */
    (xdc_Char)0x20,  /* [3694] */
    (xdc_Char)0x52,  /* [3695] */
    (xdc_Char)0x65,  /* [3696] */
    (xdc_Char)0x63,  /* [3697] */
    (xdc_Char)0x65,  /* [3698] */
    (xdc_Char)0x69,  /* [3699] */
    (xdc_Char)0x76,  /* [3700] */
    (xdc_Char)0x65,  /* [3701] */
    (xdc_Char)0x64,  /* [3702] */
    (xdc_Char)0x20,  /* [3703] */
    (xdc_Char)0x69,  /* [3704] */
    (xdc_Char)0x6e,  /* [3705] */
    (xdc_Char)0x76,  /* [3706] */
    (xdc_Char)0x61,  /* [3707] */
    (xdc_Char)0x6c,  /* [3708] */
    (xdc_Char)0x69,  /* [3709] */
    (xdc_Char)0x64,  /* [3710] */
    (xdc_Char)0x20,  /* [3711] */
    (xdc_Char)0x63,  /* [3712] */
    (xdc_Char)0x6f,  /* [3713] */
    (xdc_Char)0x6d,  /* [3714] */
    (xdc_Char)0x6d,  /* [3715] */
    (xdc_Char)0x61,  /* [3716] */
    (xdc_Char)0x6e,  /* [3717] */
    (xdc_Char)0x64,  /* [3718] */
    (xdc_Char)0x2c,  /* [3719] */
    (xdc_Char)0x20,  /* [3720] */
    (xdc_Char)0x69,  /* [3721] */
    (xdc_Char)0x64,  /* [3722] */
    (xdc_Char)0x3a,  /* [3723] */
    (xdc_Char)0x20,  /* [3724] */
    (xdc_Char)0x25,  /* [3725] */
    (xdc_Char)0x64,  /* [3726] */
    (xdc_Char)0x2e,  /* [3727] */
    (xdc_Char)0x0,  /* [3728] */
    (xdc_Char)0x45,  /* [3729] */
    (xdc_Char)0x5f,  /* [3730] */
    (xdc_Char)0x73,  /* [3731] */
    (xdc_Char)0x74,  /* [3732] */
    (xdc_Char)0x61,  /* [3733] */
    (xdc_Char)0x63,  /* [3734] */
    (xdc_Char)0x6b,  /* [3735] */
    (xdc_Char)0x4f,  /* [3736] */
    (xdc_Char)0x76,  /* [3737] */
    (xdc_Char)0x65,  /* [3738] */
    (xdc_Char)0x72,  /* [3739] */
    (xdc_Char)0x66,  /* [3740] */
    (xdc_Char)0x6c,  /* [3741] */
    (xdc_Char)0x6f,  /* [3742] */
    (xdc_Char)0x77,  /* [3743] */
    (xdc_Char)0x3a,  /* [3744] */
    (xdc_Char)0x20,  /* [3745] */
    (xdc_Char)0x54,  /* [3746] */
    (xdc_Char)0x61,  /* [3747] */
    (xdc_Char)0x73,  /* [3748] */
    (xdc_Char)0x6b,  /* [3749] */
    (xdc_Char)0x20,  /* [3750] */
    (xdc_Char)0x30,  /* [3751] */
    (xdc_Char)0x78,  /* [3752] */
    (xdc_Char)0x25,  /* [3753] */
    (xdc_Char)0x78,  /* [3754] */
    (xdc_Char)0x20,  /* [3755] */
    (xdc_Char)0x73,  /* [3756] */
    (xdc_Char)0x74,  /* [3757] */
    (xdc_Char)0x61,  /* [3758] */
    (xdc_Char)0x63,  /* [3759] */
    (xdc_Char)0x6b,  /* [3760] */
    (xdc_Char)0x20,  /* [3761] */
    (xdc_Char)0x6f,  /* [3762] */
    (xdc_Char)0x76,  /* [3763] */
    (xdc_Char)0x65,  /* [3764] */
    (xdc_Char)0x72,  /* [3765] */
    (xdc_Char)0x66,  /* [3766] */
    (xdc_Char)0x6c,  /* [3767] */
    (xdc_Char)0x6f,  /* [3768] */
    (xdc_Char)0x77,  /* [3769] */
    (xdc_Char)0x2e,  /* [3770] */
    (xdc_Char)0x0,  /* [3771] */
    (xdc_Char)0x45,  /* [3772] */
    (xdc_Char)0x5f,  /* [3773] */
    (xdc_Char)0x73,  /* [3774] */
    (xdc_Char)0x70,  /* [3775] */
    (xdc_Char)0x4f,  /* [3776] */
    (xdc_Char)0x75,  /* [3777] */
    (xdc_Char)0x74,  /* [3778] */
    (xdc_Char)0x4f,  /* [3779] */
    (xdc_Char)0x66,  /* [3780] */
    (xdc_Char)0x42,  /* [3781] */
    (xdc_Char)0x6f,  /* [3782] */
    (xdc_Char)0x75,  /* [3783] */
    (xdc_Char)0x6e,  /* [3784] */
    (xdc_Char)0x64,  /* [3785] */
    (xdc_Char)0x73,  /* [3786] */
    (xdc_Char)0x3a,  /* [3787] */
    (xdc_Char)0x20,  /* [3788] */
    (xdc_Char)0x54,  /* [3789] */
    (xdc_Char)0x61,  /* [3790] */
    (xdc_Char)0x73,  /* [3791] */
    (xdc_Char)0x6b,  /* [3792] */
    (xdc_Char)0x20,  /* [3793] */
    (xdc_Char)0x30,  /* [3794] */
    (xdc_Char)0x78,  /* [3795] */
    (xdc_Char)0x25,  /* [3796] */
    (xdc_Char)0x78,  /* [3797] */
    (xdc_Char)0x20,  /* [3798] */
    (xdc_Char)0x73,  /* [3799] */
    (xdc_Char)0x74,  /* [3800] */
    (xdc_Char)0x61,  /* [3801] */
    (xdc_Char)0x63,  /* [3802] */
    (xdc_Char)0x6b,  /* [3803] */
    (xdc_Char)0x20,  /* [3804] */
    (xdc_Char)0x65,  /* [3805] */
    (xdc_Char)0x72,  /* [3806] */
    (xdc_Char)0x72,  /* [3807] */
    (xdc_Char)0x6f,  /* [3808] */
    (xdc_Char)0x72,  /* [3809] */
    (xdc_Char)0x2c,  /* [3810] */
    (xdc_Char)0x20,  /* [3811] */
    (xdc_Char)0x53,  /* [3812] */
    (xdc_Char)0x50,  /* [3813] */
    (xdc_Char)0x20,  /* [3814] */
    (xdc_Char)0x3d,  /* [3815] */
    (xdc_Char)0x20,  /* [3816] */
    (xdc_Char)0x30,  /* [3817] */
    (xdc_Char)0x78,  /* [3818] */
    (xdc_Char)0x25,  /* [3819] */
    (xdc_Char)0x78,  /* [3820] */
    (xdc_Char)0x2e,  /* [3821] */
    (xdc_Char)0x0,  /* [3822] */
    (xdc_Char)0x45,  /* [3823] */
    (xdc_Char)0x5f,  /* [3824] */
    (xdc_Char)0x64,  /* [3825] */
    (xdc_Char)0x65,  /* [3826] */
    (xdc_Char)0x6c,  /* [3827] */
    (xdc_Char)0x65,  /* [3828] */
    (xdc_Char)0x74,  /* [3829] */
    (xdc_Char)0x65,  /* [3830] */
    (xdc_Char)0x4e,  /* [3831] */
    (xdc_Char)0x6f,  /* [3832] */
    (xdc_Char)0x74,  /* [3833] */
    (xdc_Char)0x41,  /* [3834] */
    (xdc_Char)0x6c,  /* [3835] */
    (xdc_Char)0x6c,  /* [3836] */
    (xdc_Char)0x6f,  /* [3837] */
    (xdc_Char)0x77,  /* [3838] */
    (xdc_Char)0x65,  /* [3839] */
    (xdc_Char)0x64,  /* [3840] */
    (xdc_Char)0x3a,  /* [3841] */
    (xdc_Char)0x20,  /* [3842] */
    (xdc_Char)0x54,  /* [3843] */
    (xdc_Char)0x61,  /* [3844] */
    (xdc_Char)0x73,  /* [3845] */
    (xdc_Char)0x6b,  /* [3846] */
    (xdc_Char)0x20,  /* [3847] */
    (xdc_Char)0x30,  /* [3848] */
    (xdc_Char)0x78,  /* [3849] */
    (xdc_Char)0x25,  /* [3850] */
    (xdc_Char)0x78,  /* [3851] */
    (xdc_Char)0x2e,  /* [3852] */
    (xdc_Char)0x0,  /* [3853] */
    (xdc_Char)0x45,  /* [3854] */
    (xdc_Char)0x5f,  /* [3855] */
    (xdc_Char)0x61,  /* [3856] */
    (xdc_Char)0x6c,  /* [3857] */
    (xdc_Char)0x72,  /* [3858] */
    (xdc_Char)0x65,  /* [3859] */
    (xdc_Char)0x61,  /* [3860] */
    (xdc_Char)0x64,  /* [3861] */
    (xdc_Char)0x79,  /* [3862] */
    (xdc_Char)0x44,  /* [3863] */
    (xdc_Char)0x65,  /* [3864] */
    (xdc_Char)0x66,  /* [3865] */
    (xdc_Char)0x69,  /* [3866] */
    (xdc_Char)0x6e,  /* [3867] */
    (xdc_Char)0x65,  /* [3868] */
    (xdc_Char)0x64,  /* [3869] */
    (xdc_Char)0x3a,  /* [3870] */
    (xdc_Char)0x20,  /* [3871] */
    (xdc_Char)0x48,  /* [3872] */
    (xdc_Char)0x77,  /* [3873] */
    (xdc_Char)0x69,  /* [3874] */
    (xdc_Char)0x20,  /* [3875] */
    (xdc_Char)0x61,  /* [3876] */
    (xdc_Char)0x6c,  /* [3877] */
    (xdc_Char)0x72,  /* [3878] */
    (xdc_Char)0x65,  /* [3879] */
    (xdc_Char)0x61,  /* [3880] */
    (xdc_Char)0x64,  /* [3881] */
    (xdc_Char)0x79,  /* [3882] */
    (xdc_Char)0x20,  /* [3883] */
    (xdc_Char)0x64,  /* [3884] */
    (xdc_Char)0x65,  /* [3885] */
    (xdc_Char)0x66,  /* [3886] */
    (xdc_Char)0x69,  /* [3887] */
    (xdc_Char)0x6e,  /* [3888] */
    (xdc_Char)0x65,  /* [3889] */
    (xdc_Char)0x64,  /* [3890] */
    (xdc_Char)0x3a,  /* [3891] */
    (xdc_Char)0x20,  /* [3892] */
    (xdc_Char)0x69,  /* [3893] */
    (xdc_Char)0x6e,  /* [3894] */
    (xdc_Char)0x74,  /* [3895] */
    (xdc_Char)0x72,  /* [3896] */
    (xdc_Char)0x23,  /* [3897] */
    (xdc_Char)0x20,  /* [3898] */
    (xdc_Char)0x25,  /* [3899] */
    (xdc_Char)0x64,  /* [3900] */
    (xdc_Char)0x0,  /* [3901] */
    (xdc_Char)0x45,  /* [3902] */
    (xdc_Char)0x5f,  /* [3903] */
    (xdc_Char)0x68,  /* [3904] */
    (xdc_Char)0x77,  /* [3905] */
    (xdc_Char)0x69,  /* [3906] */
    (xdc_Char)0x4c,  /* [3907] */
    (xdc_Char)0x69,  /* [3908] */
    (xdc_Char)0x6d,  /* [3909] */
    (xdc_Char)0x69,  /* [3910] */
    (xdc_Char)0x74,  /* [3911] */
    (xdc_Char)0x45,  /* [3912] */
    (xdc_Char)0x78,  /* [3913] */
    (xdc_Char)0x63,  /* [3914] */
    (xdc_Char)0x65,  /* [3915] */
    (xdc_Char)0x65,  /* [3916] */
    (xdc_Char)0x64,  /* [3917] */
    (xdc_Char)0x65,  /* [3918] */
    (xdc_Char)0x64,  /* [3919] */
    (xdc_Char)0x3a,  /* [3920] */
    (xdc_Char)0x20,  /* [3921] */
    (xdc_Char)0x54,  /* [3922] */
    (xdc_Char)0x6f,  /* [3923] */
    (xdc_Char)0x6f,  /* [3924] */
    (xdc_Char)0x20,  /* [3925] */
    (xdc_Char)0x6d,  /* [3926] */
    (xdc_Char)0x61,  /* [3927] */
    (xdc_Char)0x6e,  /* [3928] */
    (xdc_Char)0x79,  /* [3929] */
    (xdc_Char)0x20,  /* [3930] */
    (xdc_Char)0x69,  /* [3931] */
    (xdc_Char)0x6e,  /* [3932] */
    (xdc_Char)0x74,  /* [3933] */
    (xdc_Char)0x65,  /* [3934] */
    (xdc_Char)0x72,  /* [3935] */
    (xdc_Char)0x72,  /* [3936] */
    (xdc_Char)0x75,  /* [3937] */
    (xdc_Char)0x70,  /* [3938] */
    (xdc_Char)0x74,  /* [3939] */
    (xdc_Char)0x73,  /* [3940] */
    (xdc_Char)0x20,  /* [3941] */
    (xdc_Char)0x64,  /* [3942] */
    (xdc_Char)0x65,  /* [3943] */
    (xdc_Char)0x66,  /* [3944] */
    (xdc_Char)0x69,  /* [3945] */
    (xdc_Char)0x6e,  /* [3946] */
    (xdc_Char)0x65,  /* [3947] */
    (xdc_Char)0x64,  /* [3948] */
    (xdc_Char)0x0,  /* [3949] */
    (xdc_Char)0x45,  /* [3950] */
    (xdc_Char)0x5f,  /* [3951] */
    (xdc_Char)0x65,  /* [3952] */
    (xdc_Char)0x78,  /* [3953] */
    (xdc_Char)0x63,  /* [3954] */
    (xdc_Char)0x65,  /* [3955] */
    (xdc_Char)0x70,  /* [3956] */
    (xdc_Char)0x74,  /* [3957] */
    (xdc_Char)0x69,  /* [3958] */
    (xdc_Char)0x6f,  /* [3959] */
    (xdc_Char)0x6e,  /* [3960] */
    (xdc_Char)0x3a,  /* [3961] */
    (xdc_Char)0x20,  /* [3962] */
    (xdc_Char)0x69,  /* [3963] */
    (xdc_Char)0x64,  /* [3964] */
    (xdc_Char)0x20,  /* [3965] */
    (xdc_Char)0x3d,  /* [3966] */
    (xdc_Char)0x20,  /* [3967] */
    (xdc_Char)0x25,  /* [3968] */
    (xdc_Char)0x64,  /* [3969] */
    (xdc_Char)0x2c,  /* [3970] */
    (xdc_Char)0x20,  /* [3971] */
    (xdc_Char)0x70,  /* [3972] */
    (xdc_Char)0x63,  /* [3973] */
    (xdc_Char)0x20,  /* [3974] */
    (xdc_Char)0x3d,  /* [3975] */
    (xdc_Char)0x20,  /* [3976] */
    (xdc_Char)0x25,  /* [3977] */
    (xdc_Char)0x30,  /* [3978] */
    (xdc_Char)0x38,  /* [3979] */
    (xdc_Char)0x78,  /* [3980] */
    (xdc_Char)0x2e,  /* [3981] */
    (xdc_Char)0xa,  /* [3982] */
    (xdc_Char)0x54,  /* [3983] */
    (xdc_Char)0x6f,  /* [3984] */
    (xdc_Char)0x20,  /* [3985] */
    (xdc_Char)0x73,  /* [3986] */
    (xdc_Char)0x65,  /* [3987] */
    (xdc_Char)0x65,  /* [3988] */
    (xdc_Char)0x20,  /* [3989] */
    (xdc_Char)0x6d,  /* [3990] */
    (xdc_Char)0x6f,  /* [3991] */
    (xdc_Char)0x72,  /* [3992] */
    (xdc_Char)0x65,  /* [3993] */
    (xdc_Char)0x20,  /* [3994] */
    (xdc_Char)0x65,  /* [3995] */
    (xdc_Char)0x78,  /* [3996] */
    (xdc_Char)0x63,  /* [3997] */
    (xdc_Char)0x65,  /* [3998] */
    (xdc_Char)0x70,  /* [3999] */
    (xdc_Char)0x74,  /* [4000] */
    (xdc_Char)0x69,  /* [4001] */
    (xdc_Char)0x6f,  /* [4002] */
    (xdc_Char)0x6e,  /* [4003] */
    (xdc_Char)0x20,  /* [4004] */
    (xdc_Char)0x64,  /* [4005] */
    (xdc_Char)0x65,  /* [4006] */
    (xdc_Char)0x74,  /* [4007] */
    (xdc_Char)0x61,  /* [4008] */
    (xdc_Char)0x69,  /* [4009] */
    (xdc_Char)0x6c,  /* [4010] */
    (xdc_Char)0x2c,  /* [4011] */
    (xdc_Char)0x20,  /* [4012] */
    (xdc_Char)0x73,  /* [4013] */
    (xdc_Char)0x65,  /* [4014] */
    (xdc_Char)0x74,  /* [4015] */
    (xdc_Char)0x20,  /* [4016] */
    (xdc_Char)0x74,  /* [4017] */
    (xdc_Char)0x69,  /* [4018] */
    (xdc_Char)0x2e,  /* [4019] */
    (xdc_Char)0x73,  /* [4020] */
    (xdc_Char)0x79,  /* [4021] */
    (xdc_Char)0x73,  /* [4022] */
    (xdc_Char)0x62,  /* [4023] */
    (xdc_Char)0x69,  /* [4024] */
    (xdc_Char)0x6f,  /* [4025] */
    (xdc_Char)0x73,  /* [4026] */
    (xdc_Char)0x2e,  /* [4027] */
    (xdc_Char)0x66,  /* [4028] */
    (xdc_Char)0x61,  /* [4029] */
    (xdc_Char)0x6d,  /* [4030] */
    (xdc_Char)0x69,  /* [4031] */
    (xdc_Char)0x6c,  /* [4032] */
    (xdc_Char)0x79,  /* [4033] */
    (xdc_Char)0x2e,  /* [4034] */
    (xdc_Char)0x61,  /* [4035] */
    (xdc_Char)0x72,  /* [4036] */
    (xdc_Char)0x6d,  /* [4037] */
    (xdc_Char)0x2e,  /* [4038] */
    (xdc_Char)0x6d,  /* [4039] */
    (xdc_Char)0x33,  /* [4040] */
    (xdc_Char)0x2e,  /* [4041] */
    (xdc_Char)0x48,  /* [4042] */
    (xdc_Char)0x77,  /* [4043] */
    (xdc_Char)0x69,  /* [4044] */
    (xdc_Char)0x2e,  /* [4045] */
    (xdc_Char)0x65,  /* [4046] */
    (xdc_Char)0x6e,  /* [4047] */
    (xdc_Char)0x61,  /* [4048] */
    (xdc_Char)0x62,  /* [4049] */
    (xdc_Char)0x6c,  /* [4050] */
    (xdc_Char)0x65,  /* [4051] */
    (xdc_Char)0x45,  /* [4052] */
    (xdc_Char)0x78,  /* [4053] */
    (xdc_Char)0x63,  /* [4054] */
    (xdc_Char)0x65,  /* [4055] */
    (xdc_Char)0x70,  /* [4056] */
    (xdc_Char)0x74,  /* [4057] */
    (xdc_Char)0x69,  /* [4058] */
    (xdc_Char)0x6f,  /* [4059] */
    (xdc_Char)0x6e,  /* [4060] */
    (xdc_Char)0x20,  /* [4061] */
    (xdc_Char)0x3d,  /* [4062] */
    (xdc_Char)0x20,  /* [4063] */
    (xdc_Char)0x74,  /* [4064] */
    (xdc_Char)0x72,  /* [4065] */
    (xdc_Char)0x75,  /* [4066] */
    (xdc_Char)0x65,  /* [4067] */
    (xdc_Char)0x20,  /* [4068] */
    (xdc_Char)0x6f,  /* [4069] */
    (xdc_Char)0x72,  /* [4070] */
    (xdc_Char)0x2c,  /* [4071] */
    (xdc_Char)0xa,  /* [4072] */
    (xdc_Char)0x65,  /* [4073] */
    (xdc_Char)0x78,  /* [4074] */
    (xdc_Char)0x61,  /* [4075] */
    (xdc_Char)0x6d,  /* [4076] */
    (xdc_Char)0x69,  /* [4077] */
    (xdc_Char)0x6e,  /* [4078] */
    (xdc_Char)0x65,  /* [4079] */
    (xdc_Char)0x20,  /* [4080] */
    (xdc_Char)0x74,  /* [4081] */
    (xdc_Char)0x68,  /* [4082] */
    (xdc_Char)0x65,  /* [4083] */
    (xdc_Char)0x20,  /* [4084] */
    (xdc_Char)0x45,  /* [4085] */
    (xdc_Char)0x78,  /* [4086] */
    (xdc_Char)0x63,  /* [4087] */
    (xdc_Char)0x65,  /* [4088] */
    (xdc_Char)0x70,  /* [4089] */
    (xdc_Char)0x74,  /* [4090] */
    (xdc_Char)0x69,  /* [4091] */
    (xdc_Char)0x6f,  /* [4092] */
    (xdc_Char)0x6e,  /* [4093] */
    (xdc_Char)0x20,  /* [4094] */
    (xdc_Char)0x76,  /* [4095] */
    (xdc_Char)0x69,  /* [4096] */
    (xdc_Char)0x65,  /* [4097] */
    (xdc_Char)0x77,  /* [4098] */
    (xdc_Char)0x20,  /* [4099] */
    (xdc_Char)0x66,  /* [4100] */
    (xdc_Char)0x6f,  /* [4101] */
    (xdc_Char)0x72,  /* [4102] */
    (xdc_Char)0x20,  /* [4103] */
    (xdc_Char)0x74,  /* [4104] */
    (xdc_Char)0x68,  /* [4105] */
    (xdc_Char)0x65,  /* [4106] */
    (xdc_Char)0x20,  /* [4107] */
    (xdc_Char)0x74,  /* [4108] */
    (xdc_Char)0x69,  /* [4109] */
    (xdc_Char)0x2e,  /* [4110] */
    (xdc_Char)0x73,  /* [4111] */
    (xdc_Char)0x79,  /* [4112] */
    (xdc_Char)0x73,  /* [4113] */
    (xdc_Char)0x62,  /* [4114] */
    (xdc_Char)0x69,  /* [4115] */
    (xdc_Char)0x6f,  /* [4116] */
    (xdc_Char)0x73,  /* [4117] */
    (xdc_Char)0x2e,  /* [4118] */
    (xdc_Char)0x66,  /* [4119] */
    (xdc_Char)0x61,  /* [4120] */
    (xdc_Char)0x6d,  /* [4121] */
    (xdc_Char)0x69,  /* [4122] */
    (xdc_Char)0x6c,  /* [4123] */
    (xdc_Char)0x79,  /* [4124] */
    (xdc_Char)0x2e,  /* [4125] */
    (xdc_Char)0x61,  /* [4126] */
    (xdc_Char)0x72,  /* [4127] */
    (xdc_Char)0x6d,  /* [4128] */
    (xdc_Char)0x2e,  /* [4129] */
    (xdc_Char)0x6d,  /* [4130] */
    (xdc_Char)0x33,  /* [4131] */
    (xdc_Char)0x2e,  /* [4132] */
    (xdc_Char)0x48,  /* [4133] */
    (xdc_Char)0x77,  /* [4134] */
    (xdc_Char)0x69,  /* [4135] */
    (xdc_Char)0x20,  /* [4136] */
    (xdc_Char)0x6d,  /* [4137] */
    (xdc_Char)0x6f,  /* [4138] */
    (xdc_Char)0x64,  /* [4139] */
    (xdc_Char)0x75,  /* [4140] */
    (xdc_Char)0x6c,  /* [4141] */
    (xdc_Char)0x65,  /* [4142] */
    (xdc_Char)0x20,  /* [4143] */
    (xdc_Char)0x75,  /* [4144] */
    (xdc_Char)0x73,  /* [4145] */
    (xdc_Char)0x69,  /* [4146] */
    (xdc_Char)0x6e,  /* [4147] */
    (xdc_Char)0x67,  /* [4148] */
    (xdc_Char)0x20,  /* [4149] */
    (xdc_Char)0x52,  /* [4150] */
    (xdc_Char)0x4f,  /* [4151] */
    (xdc_Char)0x56,  /* [4152] */
    (xdc_Char)0x2e,  /* [4153] */
    (xdc_Char)0x0,  /* [4154] */
    (xdc_Char)0x45,  /* [4155] */
    (xdc_Char)0x5f,  /* [4156] */
    (xdc_Char)0x6e,  /* [4157] */
    (xdc_Char)0x6f,  /* [4158] */
    (xdc_Char)0x49,  /* [4159] */
    (xdc_Char)0x73,  /* [4160] */
    (xdc_Char)0x72,  /* [4161] */
    (xdc_Char)0x3a,  /* [4162] */
    (xdc_Char)0x20,  /* [4163] */
    (xdc_Char)0x69,  /* [4164] */
    (xdc_Char)0x64,  /* [4165] */
    (xdc_Char)0x20,  /* [4166] */
    (xdc_Char)0x3d,  /* [4167] */
    (xdc_Char)0x20,  /* [4168] */
    (xdc_Char)0x25,  /* [4169] */
    (xdc_Char)0x64,  /* [4170] */
    (xdc_Char)0x2c,  /* [4171] */
    (xdc_Char)0x20,  /* [4172] */
    (xdc_Char)0x70,  /* [4173] */
    (xdc_Char)0x63,  /* [4174] */
    (xdc_Char)0x20,  /* [4175] */
    (xdc_Char)0x3d,  /* [4176] */
    (xdc_Char)0x20,  /* [4177] */
    (xdc_Char)0x25,  /* [4178] */
    (xdc_Char)0x30,  /* [4179] */
    (xdc_Char)0x38,  /* [4180] */
    (xdc_Char)0x78,  /* [4181] */
    (xdc_Char)0x0,  /* [4182] */
    (xdc_Char)0x45,  /* [4183] */
    (xdc_Char)0x5f,  /* [4184] */
    (xdc_Char)0x4e,  /* [4185] */
    (xdc_Char)0x4d,  /* [4186] */
    (xdc_Char)0x49,  /* [4187] */
    (xdc_Char)0x3a,  /* [4188] */
    (xdc_Char)0x20,  /* [4189] */
    (xdc_Char)0x25,  /* [4190] */
    (xdc_Char)0x73,  /* [4191] */
    (xdc_Char)0x0,  /* [4192] */
    (xdc_Char)0x45,  /* [4193] */
    (xdc_Char)0x5f,  /* [4194] */
    (xdc_Char)0x68,  /* [4195] */
    (xdc_Char)0x61,  /* [4196] */
    (xdc_Char)0x72,  /* [4197] */
    (xdc_Char)0x64,  /* [4198] */
    (xdc_Char)0x46,  /* [4199] */
    (xdc_Char)0x61,  /* [4200] */
    (xdc_Char)0x75,  /* [4201] */
    (xdc_Char)0x6c,  /* [4202] */
    (xdc_Char)0x74,  /* [4203] */
    (xdc_Char)0x3a,  /* [4204] */
    (xdc_Char)0x20,  /* [4205] */
    (xdc_Char)0x25,  /* [4206] */
    (xdc_Char)0x73,  /* [4207] */
    (xdc_Char)0x0,  /* [4208] */
    (xdc_Char)0x45,  /* [4209] */
    (xdc_Char)0x5f,  /* [4210] */
    (xdc_Char)0x6d,  /* [4211] */
    (xdc_Char)0x65,  /* [4212] */
    (xdc_Char)0x6d,  /* [4213] */
    (xdc_Char)0x46,  /* [4214] */
    (xdc_Char)0x61,  /* [4215] */
    (xdc_Char)0x75,  /* [4216] */
    (xdc_Char)0x6c,  /* [4217] */
    (xdc_Char)0x74,  /* [4218] */
    (xdc_Char)0x3a,  /* [4219] */
    (xdc_Char)0x20,  /* [4220] */
    (xdc_Char)0x25,  /* [4221] */
    (xdc_Char)0x73,  /* [4222] */
    (xdc_Char)0x2c,  /* [4223] */
    (xdc_Char)0x20,  /* [4224] */
    (xdc_Char)0x61,  /* [4225] */
    (xdc_Char)0x64,  /* [4226] */
    (xdc_Char)0x64,  /* [4227] */
    (xdc_Char)0x72,  /* [4228] */
    (xdc_Char)0x65,  /* [4229] */
    (xdc_Char)0x73,  /* [4230] */
    (xdc_Char)0x73,  /* [4231] */
    (xdc_Char)0x3a,  /* [4232] */
    (xdc_Char)0x20,  /* [4233] */
    (xdc_Char)0x25,  /* [4234] */
    (xdc_Char)0x30,  /* [4235] */
    (xdc_Char)0x38,  /* [4236] */
    (xdc_Char)0x78,  /* [4237] */
    (xdc_Char)0x0,  /* [4238] */
    (xdc_Char)0x45,  /* [4239] */
    (xdc_Char)0x5f,  /* [4240] */
    (xdc_Char)0x62,  /* [4241] */
    (xdc_Char)0x75,  /* [4242] */
    (xdc_Char)0x73,  /* [4243] */
    (xdc_Char)0x46,  /* [4244] */
    (xdc_Char)0x61,  /* [4245] */
    (xdc_Char)0x75,  /* [4246] */
    (xdc_Char)0x6c,  /* [4247] */
    (xdc_Char)0x74,  /* [4248] */
    (xdc_Char)0x3a,  /* [4249] */
    (xdc_Char)0x20,  /* [4250] */
    (xdc_Char)0x25,  /* [4251] */
    (xdc_Char)0x73,  /* [4252] */
    (xdc_Char)0x2c,  /* [4253] */
    (xdc_Char)0x20,  /* [4254] */
    (xdc_Char)0x61,  /* [4255] */
    (xdc_Char)0x64,  /* [4256] */
    (xdc_Char)0x64,  /* [4257] */
    (xdc_Char)0x72,  /* [4258] */
    (xdc_Char)0x65,  /* [4259] */
    (xdc_Char)0x73,  /* [4260] */
    (xdc_Char)0x73,  /* [4261] */
    (xdc_Char)0x3a,  /* [4262] */
    (xdc_Char)0x20,  /* [4263] */
    (xdc_Char)0x25,  /* [4264] */
    (xdc_Char)0x30,  /* [4265] */
    (xdc_Char)0x38,  /* [4266] */
    (xdc_Char)0x78,  /* [4267] */
    (xdc_Char)0x0,  /* [4268] */
    (xdc_Char)0x45,  /* [4269] */
    (xdc_Char)0x5f,  /* [4270] */
    (xdc_Char)0x75,  /* [4271] */
    (xdc_Char)0x73,  /* [4272] */
    (xdc_Char)0x61,  /* [4273] */
    (xdc_Char)0x67,  /* [4274] */
    (xdc_Char)0x65,  /* [4275] */
    (xdc_Char)0x46,  /* [4276] */
    (xdc_Char)0x61,  /* [4277] */
    (xdc_Char)0x75,  /* [4278] */
    (xdc_Char)0x6c,  /* [4279] */
    (xdc_Char)0x74,  /* [4280] */
    (xdc_Char)0x3a,  /* [4281] */
    (xdc_Char)0x20,  /* [4282] */
    (xdc_Char)0x25,  /* [4283] */
    (xdc_Char)0x73,  /* [4284] */
    (xdc_Char)0x0,  /* [4285] */
    (xdc_Char)0x45,  /* [4286] */
    (xdc_Char)0x5f,  /* [4287] */
    (xdc_Char)0x73,  /* [4288] */
    (xdc_Char)0x76,  /* [4289] */
    (xdc_Char)0x43,  /* [4290] */
    (xdc_Char)0x61,  /* [4291] */
    (xdc_Char)0x6c,  /* [4292] */
    (xdc_Char)0x6c,  /* [4293] */
    (xdc_Char)0x3a,  /* [4294] */
    (xdc_Char)0x20,  /* [4295] */
    (xdc_Char)0x73,  /* [4296] */
    (xdc_Char)0x76,  /* [4297] */
    (xdc_Char)0x4e,  /* [4298] */
    (xdc_Char)0x75,  /* [4299] */
    (xdc_Char)0x6d,  /* [4300] */
    (xdc_Char)0x20,  /* [4301] */
    (xdc_Char)0x3d,  /* [4302] */
    (xdc_Char)0x20,  /* [4303] */
    (xdc_Char)0x25,  /* [4304] */
    (xdc_Char)0x64,  /* [4305] */
    (xdc_Char)0x0,  /* [4306] */
    (xdc_Char)0x45,  /* [4307] */
    (xdc_Char)0x5f,  /* [4308] */
    (xdc_Char)0x64,  /* [4309] */
    (xdc_Char)0x65,  /* [4310] */
    (xdc_Char)0x62,  /* [4311] */
    (xdc_Char)0x75,  /* [4312] */
    (xdc_Char)0x67,  /* [4313] */
    (xdc_Char)0x4d,  /* [4314] */
    (xdc_Char)0x6f,  /* [4315] */
    (xdc_Char)0x6e,  /* [4316] */
    (xdc_Char)0x3a,  /* [4317] */
    (xdc_Char)0x20,  /* [4318] */
    (xdc_Char)0x25,  /* [4319] */
    (xdc_Char)0x73,  /* [4320] */
    (xdc_Char)0x0,  /* [4321] */
    (xdc_Char)0x45,  /* [4322] */
    (xdc_Char)0x5f,  /* [4323] */
    (xdc_Char)0x72,  /* [4324] */
    (xdc_Char)0x65,  /* [4325] */
    (xdc_Char)0x73,  /* [4326] */
    (xdc_Char)0x65,  /* [4327] */
    (xdc_Char)0x72,  /* [4328] */
    (xdc_Char)0x76,  /* [4329] */
    (xdc_Char)0x65,  /* [4330] */
    (xdc_Char)0x64,  /* [4331] */
    (xdc_Char)0x3a,  /* [4332] */
    (xdc_Char)0x20,  /* [4333] */
    (xdc_Char)0x25,  /* [4334] */
    (xdc_Char)0x73,  /* [4335] */
    (xdc_Char)0x20,  /* [4336] */
    (xdc_Char)0x25,  /* [4337] */
    (xdc_Char)0x64,  /* [4338] */
    (xdc_Char)0x0,  /* [4339] */
    (xdc_Char)0x45,  /* [4340] */
    (xdc_Char)0x5f,  /* [4341] */
    (xdc_Char)0x69,  /* [4342] */
    (xdc_Char)0x6e,  /* [4343] */
    (xdc_Char)0x76,  /* [4344] */
    (xdc_Char)0x61,  /* [4345] */
    (xdc_Char)0x6c,  /* [4346] */
    (xdc_Char)0x69,  /* [4347] */
    (xdc_Char)0x64,  /* [4348] */
    (xdc_Char)0x54,  /* [4349] */
    (xdc_Char)0x69,  /* [4350] */
    (xdc_Char)0x6d,  /* [4351] */
    (xdc_Char)0x65,  /* [4352] */
    (xdc_Char)0x72,  /* [4353] */
    (xdc_Char)0x3a,  /* [4354] */
    (xdc_Char)0x20,  /* [4355] */
    (xdc_Char)0x49,  /* [4356] */
    (xdc_Char)0x6e,  /* [4357] */
    (xdc_Char)0x76,  /* [4358] */
    (xdc_Char)0x61,  /* [4359] */
    (xdc_Char)0x6c,  /* [4360] */
    (xdc_Char)0x69,  /* [4361] */
    (xdc_Char)0x64,  /* [4362] */
    (xdc_Char)0x20,  /* [4363] */
    (xdc_Char)0x54,  /* [4364] */
    (xdc_Char)0x69,  /* [4365] */
    (xdc_Char)0x6d,  /* [4366] */
    (xdc_Char)0x65,  /* [4367] */
    (xdc_Char)0x72,  /* [4368] */
    (xdc_Char)0x20,  /* [4369] */
    (xdc_Char)0x49,  /* [4370] */
    (xdc_Char)0x64,  /* [4371] */
    (xdc_Char)0x20,  /* [4372] */
    (xdc_Char)0x25,  /* [4373] */
    (xdc_Char)0x64,  /* [4374] */
    (xdc_Char)0x0,  /* [4375] */
    (xdc_Char)0x45,  /* [4376] */
    (xdc_Char)0x5f,  /* [4377] */
    (xdc_Char)0x6e,  /* [4378] */
    (xdc_Char)0x6f,  /* [4379] */
    (xdc_Char)0x74,  /* [4380] */
    (xdc_Char)0x41,  /* [4381] */
    (xdc_Char)0x76,  /* [4382] */
    (xdc_Char)0x61,  /* [4383] */
    (xdc_Char)0x69,  /* [4384] */
    (xdc_Char)0x6c,  /* [4385] */
    (xdc_Char)0x61,  /* [4386] */
    (xdc_Char)0x62,  /* [4387] */
    (xdc_Char)0x6c,  /* [4388] */
    (xdc_Char)0x65,  /* [4389] */
    (xdc_Char)0x3a,  /* [4390] */
    (xdc_Char)0x20,  /* [4391] */
    (xdc_Char)0x54,  /* [4392] */
    (xdc_Char)0x69,  /* [4393] */
    (xdc_Char)0x6d,  /* [4394] */
    (xdc_Char)0x65,  /* [4395] */
    (xdc_Char)0x72,  /* [4396] */
    (xdc_Char)0x20,  /* [4397] */
    (xdc_Char)0x6e,  /* [4398] */
    (xdc_Char)0x6f,  /* [4399] */
    (xdc_Char)0x74,  /* [4400] */
    (xdc_Char)0x20,  /* [4401] */
    (xdc_Char)0x61,  /* [4402] */
    (xdc_Char)0x76,  /* [4403] */
    (xdc_Char)0x61,  /* [4404] */
    (xdc_Char)0x69,  /* [4405] */
    (xdc_Char)0x6c,  /* [4406] */
    (xdc_Char)0x61,  /* [4407] */
    (xdc_Char)0x62,  /* [4408] */
    (xdc_Char)0x6c,  /* [4409] */
    (xdc_Char)0x65,  /* [4410] */
    (xdc_Char)0x20,  /* [4411] */
    (xdc_Char)0x25,  /* [4412] */
    (xdc_Char)0x64,  /* [4413] */
    (xdc_Char)0x0,  /* [4414] */
    (xdc_Char)0x45,  /* [4415] */
    (xdc_Char)0x5f,  /* [4416] */
    (xdc_Char)0x63,  /* [4417] */
    (xdc_Char)0x61,  /* [4418] */
    (xdc_Char)0x6e,  /* [4419] */
    (xdc_Char)0x6e,  /* [4420] */
    (xdc_Char)0x6f,  /* [4421] */
    (xdc_Char)0x74,  /* [4422] */
    (xdc_Char)0x53,  /* [4423] */
    (xdc_Char)0x75,  /* [4424] */
    (xdc_Char)0x70,  /* [4425] */
    (xdc_Char)0x70,  /* [4426] */
    (xdc_Char)0x6f,  /* [4427] */
    (xdc_Char)0x72,  /* [4428] */
    (xdc_Char)0x74,  /* [4429] */
    (xdc_Char)0x3a,  /* [4430] */
    (xdc_Char)0x20,  /* [4431] */
    (xdc_Char)0x54,  /* [4432] */
    (xdc_Char)0x69,  /* [4433] */
    (xdc_Char)0x6d,  /* [4434] */
    (xdc_Char)0x65,  /* [4435] */
    (xdc_Char)0x72,  /* [4436] */
    (xdc_Char)0x20,  /* [4437] */
    (xdc_Char)0x63,  /* [4438] */
    (xdc_Char)0x61,  /* [4439] */
    (xdc_Char)0x6e,  /* [4440] */
    (xdc_Char)0x6e,  /* [4441] */
    (xdc_Char)0x6f,  /* [4442] */
    (xdc_Char)0x74,  /* [4443] */
    (xdc_Char)0x20,  /* [4444] */
    (xdc_Char)0x73,  /* [4445] */
    (xdc_Char)0x75,  /* [4446] */
    (xdc_Char)0x70,  /* [4447] */
    (xdc_Char)0x70,  /* [4448] */
    (xdc_Char)0x6f,  /* [4449] */
    (xdc_Char)0x72,  /* [4450] */
    (xdc_Char)0x74,  /* [4451] */
    (xdc_Char)0x20,  /* [4452] */
    (xdc_Char)0x72,  /* [4453] */
    (xdc_Char)0x65,  /* [4454] */
    (xdc_Char)0x71,  /* [4455] */
    (xdc_Char)0x75,  /* [4456] */
    (xdc_Char)0x65,  /* [4457] */
    (xdc_Char)0x73,  /* [4458] */
    (xdc_Char)0x74,  /* [4459] */
    (xdc_Char)0x65,  /* [4460] */
    (xdc_Char)0x64,  /* [4461] */
    (xdc_Char)0x20,  /* [4462] */
    (xdc_Char)0x70,  /* [4463] */
    (xdc_Char)0x65,  /* [4464] */
    (xdc_Char)0x72,  /* [4465] */
    (xdc_Char)0x69,  /* [4466] */
    (xdc_Char)0x6f,  /* [4467] */
    (xdc_Char)0x64,  /* [4468] */
    (xdc_Char)0x20,  /* [4469] */
    (xdc_Char)0x25,  /* [4470] */
    (xdc_Char)0x64,  /* [4471] */
    (xdc_Char)0x0,  /* [4472] */
    (xdc_Char)0x45,  /* [4473] */
    (xdc_Char)0x5f,  /* [4474] */
    (xdc_Char)0x73,  /* [4475] */
    (xdc_Char)0x74,  /* [4476] */
    (xdc_Char)0x61,  /* [4477] */
    (xdc_Char)0x63,  /* [4478] */
    (xdc_Char)0x6b,  /* [4479] */
    (xdc_Char)0x4f,  /* [4480] */
    (xdc_Char)0x76,  /* [4481] */
    (xdc_Char)0x65,  /* [4482] */
    (xdc_Char)0x72,  /* [4483] */
    (xdc_Char)0x66,  /* [4484] */
    (xdc_Char)0x6c,  /* [4485] */
    (xdc_Char)0x6f,  /* [4486] */
    (xdc_Char)0x77,  /* [4487] */
    (xdc_Char)0x3a,  /* [4488] */
    (xdc_Char)0x20,  /* [4489] */
    (xdc_Char)0x49,  /* [4490] */
    (xdc_Char)0x53,  /* [4491] */
    (xdc_Char)0x52,  /* [4492] */
    (xdc_Char)0x20,  /* [4493] */
    (xdc_Char)0x73,  /* [4494] */
    (xdc_Char)0x74,  /* [4495] */
    (xdc_Char)0x61,  /* [4496] */
    (xdc_Char)0x63,  /* [4497] */
    (xdc_Char)0x6b,  /* [4498] */
    (xdc_Char)0x20,  /* [4499] */
    (xdc_Char)0x6f,  /* [4500] */
    (xdc_Char)0x76,  /* [4501] */
    (xdc_Char)0x65,  /* [4502] */
    (xdc_Char)0x72,  /* [4503] */
    (xdc_Char)0x66,  /* [4504] */
    (xdc_Char)0x6c,  /* [4505] */
    (xdc_Char)0x6f,  /* [4506] */
    (xdc_Char)0x77,  /* [4507] */
    (xdc_Char)0x2e,  /* [4508] */
    (xdc_Char)0x0,  /* [4509] */
    (xdc_Char)0x72,  /* [4510] */
    (xdc_Char)0x65,  /* [4511] */
    (xdc_Char)0x71,  /* [4512] */
    (xdc_Char)0x75,  /* [4513] */
    (xdc_Char)0x65,  /* [4514] */
    (xdc_Char)0x73,  /* [4515] */
    (xdc_Char)0x74,  /* [4516] */
    (xdc_Char)0x65,  /* [4517] */
    (xdc_Char)0x64,  /* [4518] */
    (xdc_Char)0x20,  /* [4519] */
    (xdc_Char)0x73,  /* [4520] */
    (xdc_Char)0x69,  /* [4521] */
    (xdc_Char)0x7a,  /* [4522] */
    (xdc_Char)0x65,  /* [4523] */
    (xdc_Char)0x20,  /* [4524] */
    (xdc_Char)0x69,  /* [4525] */
    (xdc_Char)0x73,  /* [4526] */
    (xdc_Char)0x20,  /* [4527] */
    (xdc_Char)0x74,  /* [4528] */
    (xdc_Char)0x6f,  /* [4529] */
    (xdc_Char)0x6f,  /* [4530] */
    (xdc_Char)0x20,  /* [4531] */
    (xdc_Char)0x62,  /* [4532] */
    (xdc_Char)0x69,  /* [4533] */
    (xdc_Char)0x67,  /* [4534] */
    (xdc_Char)0x3a,  /* [4535] */
    (xdc_Char)0x20,  /* [4536] */
    (xdc_Char)0x68,  /* [4537] */
    (xdc_Char)0x61,  /* [4538] */
    (xdc_Char)0x6e,  /* [4539] */
    (xdc_Char)0x64,  /* [4540] */
    (xdc_Char)0x6c,  /* [4541] */
    (xdc_Char)0x65,  /* [4542] */
    (xdc_Char)0x3d,  /* [4543] */
    (xdc_Char)0x30,  /* [4544] */
    (xdc_Char)0x78,  /* [4545] */
    (xdc_Char)0x25,  /* [4546] */
    (xdc_Char)0x78,  /* [4547] */
    (xdc_Char)0x2c,  /* [4548] */
    (xdc_Char)0x20,  /* [4549] */
    (xdc_Char)0x73,  /* [4550] */
    (xdc_Char)0x69,  /* [4551] */
    (xdc_Char)0x7a,  /* [4552] */
    (xdc_Char)0x65,  /* [4553] */
    (xdc_Char)0x3d,  /* [4554] */
    (xdc_Char)0x25,  /* [4555] */
    (xdc_Char)0x75,  /* [4556] */
    (xdc_Char)0x0,  /* [4557] */
    (xdc_Char)0x6f,  /* [4558] */
    (xdc_Char)0x75,  /* [4559] */
    (xdc_Char)0x74,  /* [4560] */
    (xdc_Char)0x20,  /* [4561] */
    (xdc_Char)0x6f,  /* [4562] */
    (xdc_Char)0x66,  /* [4563] */
    (xdc_Char)0x20,  /* [4564] */
    (xdc_Char)0x6d,  /* [4565] */
    (xdc_Char)0x65,  /* [4566] */
    (xdc_Char)0x6d,  /* [4567] */
    (xdc_Char)0x6f,  /* [4568] */
    (xdc_Char)0x72,  /* [4569] */
    (xdc_Char)0x79,  /* [4570] */
    (xdc_Char)0x3a,  /* [4571] */
    (xdc_Char)0x20,  /* [4572] */
    (xdc_Char)0x68,  /* [4573] */
    (xdc_Char)0x61,  /* [4574] */
    (xdc_Char)0x6e,  /* [4575] */
    (xdc_Char)0x64,  /* [4576] */
    (xdc_Char)0x6c,  /* [4577] */
    (xdc_Char)0x65,  /* [4578] */
    (xdc_Char)0x3d,  /* [4579] */
    (xdc_Char)0x30,  /* [4580] */
    (xdc_Char)0x78,  /* [4581] */
    (xdc_Char)0x25,  /* [4582] */
    (xdc_Char)0x78,  /* [4583] */
    (xdc_Char)0x2c,  /* [4584] */
    (xdc_Char)0x20,  /* [4585] */
    (xdc_Char)0x73,  /* [4586] */
    (xdc_Char)0x69,  /* [4587] */
    (xdc_Char)0x7a,  /* [4588] */
    (xdc_Char)0x65,  /* [4589] */
    (xdc_Char)0x3d,  /* [4590] */
    (xdc_Char)0x25,  /* [4591] */
    (xdc_Char)0x75,  /* [4592] */
    (xdc_Char)0x0,  /* [4593] */
    (xdc_Char)0x45,  /* [4594] */
    (xdc_Char)0x5f,  /* [4595] */
    (xdc_Char)0x70,  /* [4596] */
    (xdc_Char)0x72,  /* [4597] */
    (xdc_Char)0x69,  /* [4598] */
    (xdc_Char)0x6f,  /* [4599] */
    (xdc_Char)0x72,  /* [4600] */
    (xdc_Char)0x69,  /* [4601] */
    (xdc_Char)0x74,  /* [4602] */
    (xdc_Char)0x79,  /* [4603] */
    (xdc_Char)0x3a,  /* [4604] */
    (xdc_Char)0x20,  /* [4605] */
    (xdc_Char)0x54,  /* [4606] */
    (xdc_Char)0x68,  /* [4607] */
    (xdc_Char)0x72,  /* [4608] */
    (xdc_Char)0x65,  /* [4609] */
    (xdc_Char)0x61,  /* [4610] */
    (xdc_Char)0x64,  /* [4611] */
    (xdc_Char)0x20,  /* [4612] */
    (xdc_Char)0x70,  /* [4613] */
    (xdc_Char)0x72,  /* [4614] */
    (xdc_Char)0x69,  /* [4615] */
    (xdc_Char)0x6f,  /* [4616] */
    (xdc_Char)0x72,  /* [4617] */
    (xdc_Char)0x69,  /* [4618] */
    (xdc_Char)0x74,  /* [4619] */
    (xdc_Char)0x79,  /* [4620] */
    (xdc_Char)0x20,  /* [4621] */
    (xdc_Char)0x69,  /* [4622] */
    (xdc_Char)0x73,  /* [4623] */
    (xdc_Char)0x20,  /* [4624] */
    (xdc_Char)0x69,  /* [4625] */
    (xdc_Char)0x6e,  /* [4626] */
    (xdc_Char)0x76,  /* [4627] */
    (xdc_Char)0x61,  /* [4628] */
    (xdc_Char)0x6c,  /* [4629] */
    (xdc_Char)0x69,  /* [4630] */
    (xdc_Char)0x64,  /* [4631] */
    (xdc_Char)0x20,  /* [4632] */
    (xdc_Char)0x25,  /* [4633] */
    (xdc_Char)0x64,  /* [4634] */
    (xdc_Char)0x0,  /* [4635] */
    (xdc_Char)0x3c,  /* [4636] */
    (xdc_Char)0x2d,  /* [4637] */
    (xdc_Char)0x2d,  /* [4638] */
    (xdc_Char)0x20,  /* [4639] */
    (xdc_Char)0x63,  /* [4640] */
    (xdc_Char)0x6f,  /* [4641] */
    (xdc_Char)0x6e,  /* [4642] */
    (xdc_Char)0x73,  /* [4643] */
    (xdc_Char)0x74,  /* [4644] */
    (xdc_Char)0x72,  /* [4645] */
    (xdc_Char)0x75,  /* [4646] */
    (xdc_Char)0x63,  /* [4647] */
    (xdc_Char)0x74,  /* [4648] */
    (xdc_Char)0x3a,  /* [4649] */
    (xdc_Char)0x20,  /* [4650] */
    (xdc_Char)0x25,  /* [4651] */
    (xdc_Char)0x70,  /* [4652] */
    (xdc_Char)0x28,  /* [4653] */
    (xdc_Char)0x27,  /* [4654] */
    (xdc_Char)0x25,  /* [4655] */
    (xdc_Char)0x73,  /* [4656] */
    (xdc_Char)0x27,  /* [4657] */
    (xdc_Char)0x29,  /* [4658] */
    (xdc_Char)0x0,  /* [4659] */
    (xdc_Char)0x3c,  /* [4660] */
    (xdc_Char)0x2d,  /* [4661] */
    (xdc_Char)0x2d,  /* [4662] */
    (xdc_Char)0x20,  /* [4663] */
    (xdc_Char)0x63,  /* [4664] */
    (xdc_Char)0x72,  /* [4665] */
    (xdc_Char)0x65,  /* [4666] */
    (xdc_Char)0x61,  /* [4667] */
    (xdc_Char)0x74,  /* [4668] */
    (xdc_Char)0x65,  /* [4669] */
    (xdc_Char)0x3a,  /* [4670] */
    (xdc_Char)0x20,  /* [4671] */
    (xdc_Char)0x25,  /* [4672] */
    (xdc_Char)0x70,  /* [4673] */
    (xdc_Char)0x28,  /* [4674] */
    (xdc_Char)0x27,  /* [4675] */
    (xdc_Char)0x25,  /* [4676] */
    (xdc_Char)0x73,  /* [4677] */
    (xdc_Char)0x27,  /* [4678] */
    (xdc_Char)0x29,  /* [4679] */
    (xdc_Char)0x0,  /* [4680] */
    (xdc_Char)0x2d,  /* [4681] */
    (xdc_Char)0x2d,  /* [4682] */
    (xdc_Char)0x3e,  /* [4683] */
    (xdc_Char)0x20,  /* [4684] */
    (xdc_Char)0x64,  /* [4685] */
    (xdc_Char)0x65,  /* [4686] */
    (xdc_Char)0x73,  /* [4687] */
    (xdc_Char)0x74,  /* [4688] */
    (xdc_Char)0x72,  /* [4689] */
    (xdc_Char)0x75,  /* [4690] */
    (xdc_Char)0x63,  /* [4691] */
    (xdc_Char)0x74,  /* [4692] */
    (xdc_Char)0x3a,  /* [4693] */
    (xdc_Char)0x20,  /* [4694] */
    (xdc_Char)0x28,  /* [4695] */
    (xdc_Char)0x25,  /* [4696] */
    (xdc_Char)0x70,  /* [4697] */
    (xdc_Char)0x29,  /* [4698] */
    (xdc_Char)0x0,  /* [4699] */
    (xdc_Char)0x2d,  /* [4700] */
    (xdc_Char)0x2d,  /* [4701] */
    (xdc_Char)0x3e,  /* [4702] */
    (xdc_Char)0x20,  /* [4703] */
    (xdc_Char)0x64,  /* [4704] */
    (xdc_Char)0x65,  /* [4705] */
    (xdc_Char)0x6c,  /* [4706] */
    (xdc_Char)0x65,  /* [4707] */
    (xdc_Char)0x74,  /* [4708] */
    (xdc_Char)0x65,  /* [4709] */
    (xdc_Char)0x3a,  /* [4710] */
    (xdc_Char)0x20,  /* [4711] */
    (xdc_Char)0x28,  /* [4712] */
    (xdc_Char)0x25,  /* [4713] */
    (xdc_Char)0x70,  /* [4714] */
    (xdc_Char)0x29,  /* [4715] */
    (xdc_Char)0x0,  /* [4716] */
    (xdc_Char)0x1b,  /* [4717] */
    (xdc_Char)0x5b,  /* [4718] */
    (xdc_Char)0x33,  /* [4719] */
    (xdc_Char)0x31,  /* [4720] */
    (xdc_Char)0x3b,  /* [4721] */
    (xdc_Char)0x31,  /* [4722] */
    (xdc_Char)0x6d,  /* [4723] */
    (xdc_Char)0x45,  /* [4724] */
    (xdc_Char)0x52,  /* [4725] */
    (xdc_Char)0x52,  /* [4726] */
    (xdc_Char)0x4f,  /* [4727] */
    (xdc_Char)0x52,  /* [4728] */
    (xdc_Char)0x3a,  /* [4729] */
    (xdc_Char)0x1b,  /* [4730] */
    (xdc_Char)0x5b,  /* [4731] */
    (xdc_Char)0x30,  /* [4732] */
    (xdc_Char)0x6d,  /* [4733] */
    (xdc_Char)0x20,  /* [4734] */
    (xdc_Char)0x28,  /* [4735] */
    (xdc_Char)0x25,  /* [4736] */
    (xdc_Char)0x73,  /* [4737] */
    (xdc_Char)0x3a,  /* [4738] */
    (xdc_Char)0x25,  /* [4739] */
    (xdc_Char)0x64,  /* [4740] */
    (xdc_Char)0x29,  /* [4741] */
    (xdc_Char)0x20,  /* [4742] */
    (xdc_Char)0x25,  /* [4743] */
    (xdc_Char)0x24,  /* [4744] */
    (xdc_Char)0x53,  /* [4745] */
    (xdc_Char)0x0,  /* [4746] */
    (xdc_Char)0x1b,  /* [4747] */
    (xdc_Char)0x5b,  /* [4748] */
    (xdc_Char)0x33,  /* [4749] */
    (xdc_Char)0x33,  /* [4750] */
    (xdc_Char)0x3b,  /* [4751] */
    (xdc_Char)0x31,  /* [4752] */
    (xdc_Char)0x6d,  /* [4753] */
    (xdc_Char)0x57,  /* [4754] */
    (xdc_Char)0x41,  /* [4755] */
    (xdc_Char)0x52,  /* [4756] */
    (xdc_Char)0x4e,  /* [4757] */
    (xdc_Char)0x49,  /* [4758] */
    (xdc_Char)0x4e,  /* [4759] */
    (xdc_Char)0x47,  /* [4760] */
    (xdc_Char)0x3a,  /* [4761] */
    (xdc_Char)0x1b,  /* [4762] */
    (xdc_Char)0x5b,  /* [4763] */
    (xdc_Char)0x30,  /* [4764] */
    (xdc_Char)0x6d,  /* [4765] */
    (xdc_Char)0x20,  /* [4766] */
    (xdc_Char)0x28,  /* [4767] */
    (xdc_Char)0x25,  /* [4768] */
    (xdc_Char)0x73,  /* [4769] */
    (xdc_Char)0x3a,  /* [4770] */
    (xdc_Char)0x25,  /* [4771] */
    (xdc_Char)0x64,  /* [4772] */
    (xdc_Char)0x29,  /* [4773] */
    (xdc_Char)0x20,  /* [4774] */
    (xdc_Char)0x25,  /* [4775] */
    (xdc_Char)0x24,  /* [4776] */
    (xdc_Char)0x53,  /* [4777] */
    (xdc_Char)0x0,  /* [4778] */
    (xdc_Char)0x1b,  /* [4779] */
    (xdc_Char)0x5b,  /* [4780] */
    (xdc_Char)0x33,  /* [4781] */
    (xdc_Char)0x32,  /* [4782] */
    (xdc_Char)0x3b,  /* [4783] */
    (xdc_Char)0x31,  /* [4784] */
    (xdc_Char)0x6d,  /* [4785] */
    (xdc_Char)0x49,  /* [4786] */
    (xdc_Char)0x4e,  /* [4787] */
    (xdc_Char)0x46,  /* [4788] */
    (xdc_Char)0x4f,  /* [4789] */
    (xdc_Char)0x3a,  /* [4790] */
    (xdc_Char)0x1b,  /* [4791] */
    (xdc_Char)0x5b,  /* [4792] */
    (xdc_Char)0x30,  /* [4793] */
    (xdc_Char)0x6d,  /* [4794] */
    (xdc_Char)0x20,  /* [4795] */
    (xdc_Char)0x28,  /* [4796] */
    (xdc_Char)0x25,  /* [4797] */
    (xdc_Char)0x73,  /* [4798] */
    (xdc_Char)0x3a,  /* [4799] */
    (xdc_Char)0x25,  /* [4800] */
    (xdc_Char)0x64,  /* [4801] */
    (xdc_Char)0x29,  /* [4802] */
    (xdc_Char)0x20,  /* [4803] */
    (xdc_Char)0x25,  /* [4804] */
    (xdc_Char)0x24,  /* [4805] */
    (xdc_Char)0x53,  /* [4806] */
    (xdc_Char)0x0,  /* [4807] */
    (xdc_Char)0x53,  /* [4808] */
    (xdc_Char)0x74,  /* [4809] */
    (xdc_Char)0x61,  /* [4810] */
    (xdc_Char)0x72,  /* [4811] */
    (xdc_Char)0x74,  /* [4812] */
    (xdc_Char)0x3a,  /* [4813] */
    (xdc_Char)0x20,  /* [4814] */
    (xdc_Char)0x25,  /* [4815] */
    (xdc_Char)0x24,  /* [4816] */
    (xdc_Char)0x53,  /* [4817] */
    (xdc_Char)0x0,  /* [4818] */
    (xdc_Char)0x53,  /* [4819] */
    (xdc_Char)0x74,  /* [4820] */
    (xdc_Char)0x6f,  /* [4821] */
    (xdc_Char)0x70,  /* [4822] */
    (xdc_Char)0x3a,  /* [4823] */
    (xdc_Char)0x20,  /* [4824] */
    (xdc_Char)0x25,  /* [4825] */
    (xdc_Char)0x24,  /* [4826] */
    (xdc_Char)0x53,  /* [4827] */
    (xdc_Char)0x0,  /* [4828] */
    (xdc_Char)0x53,  /* [4829] */
    (xdc_Char)0x74,  /* [4830] */
    (xdc_Char)0x61,  /* [4831] */
    (xdc_Char)0x72,  /* [4832] */
    (xdc_Char)0x74,  /* [4833] */
    (xdc_Char)0x49,  /* [4834] */
    (xdc_Char)0x6e,  /* [4835] */
    (xdc_Char)0x73,  /* [4836] */
    (xdc_Char)0x74,  /* [4837] */
    (xdc_Char)0x61,  /* [4838] */
    (xdc_Char)0x6e,  /* [4839] */
    (xdc_Char)0x63,  /* [4840] */
    (xdc_Char)0x65,  /* [4841] */
    (xdc_Char)0x3a,  /* [4842] */
    (xdc_Char)0x20,  /* [4843] */
    (xdc_Char)0x25,  /* [4844] */
    (xdc_Char)0x24,  /* [4845] */
    (xdc_Char)0x53,  /* [4846] */
    (xdc_Char)0x0,  /* [4847] */
    (xdc_Char)0x53,  /* [4848] */
    (xdc_Char)0x74,  /* [4849] */
    (xdc_Char)0x6f,  /* [4850] */
    (xdc_Char)0x70,  /* [4851] */
    (xdc_Char)0x49,  /* [4852] */
    (xdc_Char)0x6e,  /* [4853] */
    (xdc_Char)0x73,  /* [4854] */
    (xdc_Char)0x74,  /* [4855] */
    (xdc_Char)0x61,  /* [4856] */
    (xdc_Char)0x6e,  /* [4857] */
    (xdc_Char)0x63,  /* [4858] */
    (xdc_Char)0x65,  /* [4859] */
    (xdc_Char)0x3a,  /* [4860] */
    (xdc_Char)0x20,  /* [4861] */
    (xdc_Char)0x25,  /* [4862] */
    (xdc_Char)0x24,  /* [4863] */
    (xdc_Char)0x53,  /* [4864] */
    (xdc_Char)0x0,  /* [4865] */
    (xdc_Char)0x4c,  /* [4866] */
    (xdc_Char)0x57,  /* [4867] */
    (xdc_Char)0x5f,  /* [4868] */
    (xdc_Char)0x64,  /* [4869] */
    (xdc_Char)0x65,  /* [4870] */
    (xdc_Char)0x6c,  /* [4871] */
    (xdc_Char)0x61,  /* [4872] */
    (xdc_Char)0x79,  /* [4873] */
    (xdc_Char)0x65,  /* [4874] */
    (xdc_Char)0x64,  /* [4875] */
    (xdc_Char)0x3a,  /* [4876] */
    (xdc_Char)0x20,  /* [4877] */
    (xdc_Char)0x64,  /* [4878] */
    (xdc_Char)0x65,  /* [4879] */
    (xdc_Char)0x6c,  /* [4880] */
    (xdc_Char)0x61,  /* [4881] */
    (xdc_Char)0x79,  /* [4882] */
    (xdc_Char)0x3a,  /* [4883] */
    (xdc_Char)0x20,  /* [4884] */
    (xdc_Char)0x25,  /* [4885] */
    (xdc_Char)0x64,  /* [4886] */
    (xdc_Char)0x0,  /* [4887] */
    (xdc_Char)0x4c,  /* [4888] */
    (xdc_Char)0x4d,  /* [4889] */
    (xdc_Char)0x5f,  /* [4890] */
    (xdc_Char)0x74,  /* [4891] */
    (xdc_Char)0x69,  /* [4892] */
    (xdc_Char)0x63,  /* [4893] */
    (xdc_Char)0x6b,  /* [4894] */
    (xdc_Char)0x3a,  /* [4895] */
    (xdc_Char)0x20,  /* [4896] */
    (xdc_Char)0x74,  /* [4897] */
    (xdc_Char)0x69,  /* [4898] */
    (xdc_Char)0x63,  /* [4899] */
    (xdc_Char)0x6b,  /* [4900] */
    (xdc_Char)0x3a,  /* [4901] */
    (xdc_Char)0x20,  /* [4902] */
    (xdc_Char)0x25,  /* [4903] */
    (xdc_Char)0x64,  /* [4904] */
    (xdc_Char)0x0,  /* [4905] */
    (xdc_Char)0x4c,  /* [4906] */
    (xdc_Char)0x4d,  /* [4907] */
    (xdc_Char)0x5f,  /* [4908] */
    (xdc_Char)0x62,  /* [4909] */
    (xdc_Char)0x65,  /* [4910] */
    (xdc_Char)0x67,  /* [4911] */
    (xdc_Char)0x69,  /* [4912] */
    (xdc_Char)0x6e,  /* [4913] */
    (xdc_Char)0x3a,  /* [4914] */
    (xdc_Char)0x20,  /* [4915] */
    (xdc_Char)0x63,  /* [4916] */
    (xdc_Char)0x6c,  /* [4917] */
    (xdc_Char)0x6b,  /* [4918] */
    (xdc_Char)0x3a,  /* [4919] */
    (xdc_Char)0x20,  /* [4920] */
    (xdc_Char)0x30,  /* [4921] */
    (xdc_Char)0x78,  /* [4922] */
    (xdc_Char)0x25,  /* [4923] */
    (xdc_Char)0x78,  /* [4924] */
    (xdc_Char)0x2c,  /* [4925] */
    (xdc_Char)0x20,  /* [4926] */
    (xdc_Char)0x66,  /* [4927] */
    (xdc_Char)0x75,  /* [4928] */
    (xdc_Char)0x6e,  /* [4929] */
    (xdc_Char)0x63,  /* [4930] */
    (xdc_Char)0x3a,  /* [4931] */
    (xdc_Char)0x20,  /* [4932] */
    (xdc_Char)0x30,  /* [4933] */
    (xdc_Char)0x78,  /* [4934] */
    (xdc_Char)0x25,  /* [4935] */
    (xdc_Char)0x78,  /* [4936] */
    (xdc_Char)0x0,  /* [4937] */
    (xdc_Char)0x4c,  /* [4938] */
    (xdc_Char)0x4d,  /* [4939] */
    (xdc_Char)0x5f,  /* [4940] */
    (xdc_Char)0x70,  /* [4941] */
    (xdc_Char)0x6f,  /* [4942] */
    (xdc_Char)0x73,  /* [4943] */
    (xdc_Char)0x74,  /* [4944] */
    (xdc_Char)0x3a,  /* [4945] */
    (xdc_Char)0x20,  /* [4946] */
    (xdc_Char)0x65,  /* [4947] */
    (xdc_Char)0x76,  /* [4948] */
    (xdc_Char)0x65,  /* [4949] */
    (xdc_Char)0x6e,  /* [4950] */
    (xdc_Char)0x74,  /* [4951] */
    (xdc_Char)0x3a,  /* [4952] */
    (xdc_Char)0x20,  /* [4953] */
    (xdc_Char)0x30,  /* [4954] */
    (xdc_Char)0x78,  /* [4955] */
    (xdc_Char)0x25,  /* [4956] */
    (xdc_Char)0x78,  /* [4957] */
    (xdc_Char)0x2c,  /* [4958] */
    (xdc_Char)0x20,  /* [4959] */
    (xdc_Char)0x63,  /* [4960] */
    (xdc_Char)0x75,  /* [4961] */
    (xdc_Char)0x72,  /* [4962] */
    (xdc_Char)0x72,  /* [4963] */
    (xdc_Char)0x45,  /* [4964] */
    (xdc_Char)0x76,  /* [4965] */
    (xdc_Char)0x65,  /* [4966] */
    (xdc_Char)0x6e,  /* [4967] */
    (xdc_Char)0x74,  /* [4968] */
    (xdc_Char)0x73,  /* [4969] */
    (xdc_Char)0x3a,  /* [4970] */
    (xdc_Char)0x20,  /* [4971] */
    (xdc_Char)0x30,  /* [4972] */
    (xdc_Char)0x78,  /* [4973] */
    (xdc_Char)0x25,  /* [4974] */
    (xdc_Char)0x78,  /* [4975] */
    (xdc_Char)0x2c,  /* [4976] */
    (xdc_Char)0x20,  /* [4977] */
    (xdc_Char)0x65,  /* [4978] */
    (xdc_Char)0x76,  /* [4979] */
    (xdc_Char)0x65,  /* [4980] */
    (xdc_Char)0x6e,  /* [4981] */
    (xdc_Char)0x74,  /* [4982] */
    (xdc_Char)0x49,  /* [4983] */
    (xdc_Char)0x64,  /* [4984] */
    (xdc_Char)0x3a,  /* [4985] */
    (xdc_Char)0x20,  /* [4986] */
    (xdc_Char)0x30,  /* [4987] */
    (xdc_Char)0x78,  /* [4988] */
    (xdc_Char)0x25,  /* [4989] */
    (xdc_Char)0x78,  /* [4990] */
    (xdc_Char)0x0,  /* [4991] */
    (xdc_Char)0x4c,  /* [4992] */
    (xdc_Char)0x4d,  /* [4993] */
    (xdc_Char)0x5f,  /* [4994] */
    (xdc_Char)0x70,  /* [4995] */
    (xdc_Char)0x65,  /* [4996] */
    (xdc_Char)0x6e,  /* [4997] */
    (xdc_Char)0x64,  /* [4998] */
    (xdc_Char)0x3a,  /* [4999] */
    (xdc_Char)0x20,  /* [5000] */
    (xdc_Char)0x65,  /* [5001] */
    (xdc_Char)0x76,  /* [5002] */
    (xdc_Char)0x65,  /* [5003] */
    (xdc_Char)0x6e,  /* [5004] */
    (xdc_Char)0x74,  /* [5005] */
    (xdc_Char)0x3a,  /* [5006] */
    (xdc_Char)0x20,  /* [5007] */
    (xdc_Char)0x30,  /* [5008] */
    (xdc_Char)0x78,  /* [5009] */
    (xdc_Char)0x25,  /* [5010] */
    (xdc_Char)0x78,  /* [5011] */
    (xdc_Char)0x2c,  /* [5012] */
    (xdc_Char)0x20,  /* [5013] */
    (xdc_Char)0x63,  /* [5014] */
    (xdc_Char)0x75,  /* [5015] */
    (xdc_Char)0x72,  /* [5016] */
    (xdc_Char)0x72,  /* [5017] */
    (xdc_Char)0x45,  /* [5018] */
    (xdc_Char)0x76,  /* [5019] */
    (xdc_Char)0x65,  /* [5020] */
    (xdc_Char)0x6e,  /* [5021] */
    (xdc_Char)0x74,  /* [5022] */
    (xdc_Char)0x73,  /* [5023] */
    (xdc_Char)0x3a,  /* [5024] */
    (xdc_Char)0x20,  /* [5025] */
    (xdc_Char)0x30,  /* [5026] */
    (xdc_Char)0x78,  /* [5027] */
    (xdc_Char)0x25,  /* [5028] */
    (xdc_Char)0x78,  /* [5029] */
    (xdc_Char)0x2c,  /* [5030] */
    (xdc_Char)0x20,  /* [5031] */
    (xdc_Char)0x61,  /* [5032] */
    (xdc_Char)0x6e,  /* [5033] */
    (xdc_Char)0x64,  /* [5034] */
    (xdc_Char)0x4d,  /* [5035] */
    (xdc_Char)0x61,  /* [5036] */
    (xdc_Char)0x73,  /* [5037] */
    (xdc_Char)0x6b,  /* [5038] */
    (xdc_Char)0x3a,  /* [5039] */
    (xdc_Char)0x20,  /* [5040] */
    (xdc_Char)0x30,  /* [5041] */
    (xdc_Char)0x78,  /* [5042] */
    (xdc_Char)0x25,  /* [5043] */
    (xdc_Char)0x78,  /* [5044] */
    (xdc_Char)0x2c,  /* [5045] */
    (xdc_Char)0x20,  /* [5046] */
    (xdc_Char)0x6f,  /* [5047] */
    (xdc_Char)0x72,  /* [5048] */
    (xdc_Char)0x4d,  /* [5049] */
    (xdc_Char)0x61,  /* [5050] */
    (xdc_Char)0x73,  /* [5051] */
    (xdc_Char)0x6b,  /* [5052] */
    (xdc_Char)0x3a,  /* [5053] */
    (xdc_Char)0x20,  /* [5054] */
    (xdc_Char)0x30,  /* [5055] */
    (xdc_Char)0x78,  /* [5056] */
    (xdc_Char)0x25,  /* [5057] */
    (xdc_Char)0x78,  /* [5058] */
    (xdc_Char)0x2c,  /* [5059] */
    (xdc_Char)0x20,  /* [5060] */
    (xdc_Char)0x74,  /* [5061] */
    (xdc_Char)0x69,  /* [5062] */
    (xdc_Char)0x6d,  /* [5063] */
    (xdc_Char)0x65,  /* [5064] */
    (xdc_Char)0x6f,  /* [5065] */
    (xdc_Char)0x75,  /* [5066] */
    (xdc_Char)0x74,  /* [5067] */
    (xdc_Char)0x3a,  /* [5068] */
    (xdc_Char)0x20,  /* [5069] */
    (xdc_Char)0x25,  /* [5070] */
    (xdc_Char)0x64,  /* [5071] */
    (xdc_Char)0x0,  /* [5072] */
    (xdc_Char)0x4c,  /* [5073] */
    (xdc_Char)0x4d,  /* [5074] */
    (xdc_Char)0x5f,  /* [5075] */
    (xdc_Char)0x70,  /* [5076] */
    (xdc_Char)0x6f,  /* [5077] */
    (xdc_Char)0x73,  /* [5078] */
    (xdc_Char)0x74,  /* [5079] */
    (xdc_Char)0x3a,  /* [5080] */
    (xdc_Char)0x20,  /* [5081] */
    (xdc_Char)0x73,  /* [5082] */
    (xdc_Char)0x65,  /* [5083] */
    (xdc_Char)0x6d,  /* [5084] */
    (xdc_Char)0x3a,  /* [5085] */
    (xdc_Char)0x20,  /* [5086] */
    (xdc_Char)0x30,  /* [5087] */
    (xdc_Char)0x78,  /* [5088] */
    (xdc_Char)0x25,  /* [5089] */
    (xdc_Char)0x78,  /* [5090] */
    (xdc_Char)0x2c,  /* [5091] */
    (xdc_Char)0x20,  /* [5092] */
    (xdc_Char)0x63,  /* [5093] */
    (xdc_Char)0x6f,  /* [5094] */
    (xdc_Char)0x75,  /* [5095] */
    (xdc_Char)0x6e,  /* [5096] */
    (xdc_Char)0x74,  /* [5097] */
    (xdc_Char)0x3a,  /* [5098] */
    (xdc_Char)0x20,  /* [5099] */
    (xdc_Char)0x25,  /* [5100] */
    (xdc_Char)0x64,  /* [5101] */
    (xdc_Char)0x0,  /* [5102] */
    (xdc_Char)0x4c,  /* [5103] */
    (xdc_Char)0x4d,  /* [5104] */
    (xdc_Char)0x5f,  /* [5105] */
    (xdc_Char)0x70,  /* [5106] */
    (xdc_Char)0x65,  /* [5107] */
    (xdc_Char)0x6e,  /* [5108] */
    (xdc_Char)0x64,  /* [5109] */
    (xdc_Char)0x3a,  /* [5110] */
    (xdc_Char)0x20,  /* [5111] */
    (xdc_Char)0x73,  /* [5112] */
    (xdc_Char)0x65,  /* [5113] */
    (xdc_Char)0x6d,  /* [5114] */
    (xdc_Char)0x3a,  /* [5115] */
    (xdc_Char)0x20,  /* [5116] */
    (xdc_Char)0x30,  /* [5117] */
    (xdc_Char)0x78,  /* [5118] */
    (xdc_Char)0x25,  /* [5119] */
    (xdc_Char)0x78,  /* [5120] */
    (xdc_Char)0x2c,  /* [5121] */
    (xdc_Char)0x20,  /* [5122] */
    (xdc_Char)0x63,  /* [5123] */
    (xdc_Char)0x6f,  /* [5124] */
    (xdc_Char)0x75,  /* [5125] */
    (xdc_Char)0x6e,  /* [5126] */
    (xdc_Char)0x74,  /* [5127] */
    (xdc_Char)0x3a,  /* [5128] */
    (xdc_Char)0x20,  /* [5129] */
    (xdc_Char)0x25,  /* [5130] */
    (xdc_Char)0x64,  /* [5131] */
    (xdc_Char)0x2c,  /* [5132] */
    (xdc_Char)0x20,  /* [5133] */
    (xdc_Char)0x74,  /* [5134] */
    (xdc_Char)0x69,  /* [5135] */
    (xdc_Char)0x6d,  /* [5136] */
    (xdc_Char)0x65,  /* [5137] */
    (xdc_Char)0x6f,  /* [5138] */
    (xdc_Char)0x75,  /* [5139] */
    (xdc_Char)0x74,  /* [5140] */
    (xdc_Char)0x3a,  /* [5141] */
    (xdc_Char)0x20,  /* [5142] */
    (xdc_Char)0x25,  /* [5143] */
    (xdc_Char)0x64,  /* [5144] */
    (xdc_Char)0x0,  /* [5145] */
    (xdc_Char)0x4c,  /* [5146] */
    (xdc_Char)0x4d,  /* [5147] */
    (xdc_Char)0x5f,  /* [5148] */
    (xdc_Char)0x62,  /* [5149] */
    (xdc_Char)0x65,  /* [5150] */
    (xdc_Char)0x67,  /* [5151] */
    (xdc_Char)0x69,  /* [5152] */
    (xdc_Char)0x6e,  /* [5153] */
    (xdc_Char)0x3a,  /* [5154] */
    (xdc_Char)0x20,  /* [5155] */
    (xdc_Char)0x73,  /* [5156] */
    (xdc_Char)0x77,  /* [5157] */
    (xdc_Char)0x69,  /* [5158] */
    (xdc_Char)0x3a,  /* [5159] */
    (xdc_Char)0x20,  /* [5160] */
    (xdc_Char)0x30,  /* [5161] */
    (xdc_Char)0x78,  /* [5162] */
    (xdc_Char)0x25,  /* [5163] */
    (xdc_Char)0x78,  /* [5164] */
    (xdc_Char)0x2c,  /* [5165] */
    (xdc_Char)0x20,  /* [5166] */
    (xdc_Char)0x66,  /* [5167] */
    (xdc_Char)0x75,  /* [5168] */
    (xdc_Char)0x6e,  /* [5169] */
    (xdc_Char)0x63,  /* [5170] */
    (xdc_Char)0x3a,  /* [5171] */
    (xdc_Char)0x20,  /* [5172] */
    (xdc_Char)0x30,  /* [5173] */
    (xdc_Char)0x78,  /* [5174] */
    (xdc_Char)0x25,  /* [5175] */
    (xdc_Char)0x78,  /* [5176] */
    (xdc_Char)0x2c,  /* [5177] */
    (xdc_Char)0x20,  /* [5178] */
    (xdc_Char)0x70,  /* [5179] */
    (xdc_Char)0x72,  /* [5180] */
    (xdc_Char)0x65,  /* [5181] */
    (xdc_Char)0x54,  /* [5182] */
    (xdc_Char)0x68,  /* [5183] */
    (xdc_Char)0x72,  /* [5184] */
    (xdc_Char)0x65,  /* [5185] */
    (xdc_Char)0x61,  /* [5186] */
    (xdc_Char)0x64,  /* [5187] */
    (xdc_Char)0x3a,  /* [5188] */
    (xdc_Char)0x20,  /* [5189] */
    (xdc_Char)0x25,  /* [5190] */
    (xdc_Char)0x64,  /* [5191] */
    (xdc_Char)0x0,  /* [5192] */
    (xdc_Char)0x4c,  /* [5193] */
    (xdc_Char)0x44,  /* [5194] */
    (xdc_Char)0x5f,  /* [5195] */
    (xdc_Char)0x65,  /* [5196] */
    (xdc_Char)0x6e,  /* [5197] */
    (xdc_Char)0x64,  /* [5198] */
    (xdc_Char)0x3a,  /* [5199] */
    (xdc_Char)0x20,  /* [5200] */
    (xdc_Char)0x73,  /* [5201] */
    (xdc_Char)0x77,  /* [5202] */
    (xdc_Char)0x69,  /* [5203] */
    (xdc_Char)0x3a,  /* [5204] */
    (xdc_Char)0x20,  /* [5205] */
    (xdc_Char)0x30,  /* [5206] */
    (xdc_Char)0x78,  /* [5207] */
    (xdc_Char)0x25,  /* [5208] */
    (xdc_Char)0x78,  /* [5209] */
    (xdc_Char)0x0,  /* [5210] */
    (xdc_Char)0x4c,  /* [5211] */
    (xdc_Char)0x4d,  /* [5212] */
    (xdc_Char)0x5f,  /* [5213] */
    (xdc_Char)0x70,  /* [5214] */
    (xdc_Char)0x6f,  /* [5215] */
    (xdc_Char)0x73,  /* [5216] */
    (xdc_Char)0x74,  /* [5217] */
    (xdc_Char)0x3a,  /* [5218] */
    (xdc_Char)0x20,  /* [5219] */
    (xdc_Char)0x73,  /* [5220] */
    (xdc_Char)0x77,  /* [5221] */
    (xdc_Char)0x69,  /* [5222] */
    (xdc_Char)0x3a,  /* [5223] */
    (xdc_Char)0x20,  /* [5224] */
    (xdc_Char)0x30,  /* [5225] */
    (xdc_Char)0x78,  /* [5226] */
    (xdc_Char)0x25,  /* [5227] */
    (xdc_Char)0x78,  /* [5228] */
    (xdc_Char)0x2c,  /* [5229] */
    (xdc_Char)0x20,  /* [5230] */
    (xdc_Char)0x66,  /* [5231] */
    (xdc_Char)0x75,  /* [5232] */
    (xdc_Char)0x6e,  /* [5233] */
    (xdc_Char)0x63,  /* [5234] */
    (xdc_Char)0x3a,  /* [5235] */
    (xdc_Char)0x20,  /* [5236] */
    (xdc_Char)0x30,  /* [5237] */
    (xdc_Char)0x78,  /* [5238] */
    (xdc_Char)0x25,  /* [5239] */
    (xdc_Char)0x78,  /* [5240] */
    (xdc_Char)0x2c,  /* [5241] */
    (xdc_Char)0x20,  /* [5242] */
    (xdc_Char)0x70,  /* [5243] */
    (xdc_Char)0x72,  /* [5244] */
    (xdc_Char)0x69,  /* [5245] */
    (xdc_Char)0x3a,  /* [5246] */
    (xdc_Char)0x20,  /* [5247] */
    (xdc_Char)0x25,  /* [5248] */
    (xdc_Char)0x64,  /* [5249] */
    (xdc_Char)0x0,  /* [5250] */
    (xdc_Char)0x4c,  /* [5251] */
    (xdc_Char)0x4d,  /* [5252] */
    (xdc_Char)0x5f,  /* [5253] */
    (xdc_Char)0x73,  /* [5254] */
    (xdc_Char)0x77,  /* [5255] */
    (xdc_Char)0x69,  /* [5256] */
    (xdc_Char)0x74,  /* [5257] */
    (xdc_Char)0x63,  /* [5258] */
    (xdc_Char)0x68,  /* [5259] */
    (xdc_Char)0x3a,  /* [5260] */
    (xdc_Char)0x20,  /* [5261] */
    (xdc_Char)0x6f,  /* [5262] */
    (xdc_Char)0x6c,  /* [5263] */
    (xdc_Char)0x64,  /* [5264] */
    (xdc_Char)0x74,  /* [5265] */
    (xdc_Char)0x73,  /* [5266] */
    (xdc_Char)0x6b,  /* [5267] */
    (xdc_Char)0x3a,  /* [5268] */
    (xdc_Char)0x20,  /* [5269] */
    (xdc_Char)0x30,  /* [5270] */
    (xdc_Char)0x78,  /* [5271] */
    (xdc_Char)0x25,  /* [5272] */
    (xdc_Char)0x78,  /* [5273] */
    (xdc_Char)0x2c,  /* [5274] */
    (xdc_Char)0x20,  /* [5275] */
    (xdc_Char)0x6f,  /* [5276] */
    (xdc_Char)0x6c,  /* [5277] */
    (xdc_Char)0x64,  /* [5278] */
    (xdc_Char)0x66,  /* [5279] */
    (xdc_Char)0x75,  /* [5280] */
    (xdc_Char)0x6e,  /* [5281] */
    (xdc_Char)0x63,  /* [5282] */
    (xdc_Char)0x3a,  /* [5283] */
    (xdc_Char)0x20,  /* [5284] */
    (xdc_Char)0x30,  /* [5285] */
    (xdc_Char)0x78,  /* [5286] */
    (xdc_Char)0x25,  /* [5287] */
    (xdc_Char)0x78,  /* [5288] */
    (xdc_Char)0x2c,  /* [5289] */
    (xdc_Char)0x20,  /* [5290] */
    (xdc_Char)0x6e,  /* [5291] */
    (xdc_Char)0x65,  /* [5292] */
    (xdc_Char)0x77,  /* [5293] */
    (xdc_Char)0x74,  /* [5294] */
    (xdc_Char)0x73,  /* [5295] */
    (xdc_Char)0x6b,  /* [5296] */
    (xdc_Char)0x3a,  /* [5297] */
    (xdc_Char)0x20,  /* [5298] */
    (xdc_Char)0x30,  /* [5299] */
    (xdc_Char)0x78,  /* [5300] */
    (xdc_Char)0x25,  /* [5301] */
    (xdc_Char)0x78,  /* [5302] */
    (xdc_Char)0x2c,  /* [5303] */
    (xdc_Char)0x20,  /* [5304] */
    (xdc_Char)0x6e,  /* [5305] */
    (xdc_Char)0x65,  /* [5306] */
    (xdc_Char)0x77,  /* [5307] */
    (xdc_Char)0x66,  /* [5308] */
    (xdc_Char)0x75,  /* [5309] */
    (xdc_Char)0x6e,  /* [5310] */
    (xdc_Char)0x63,  /* [5311] */
    (xdc_Char)0x3a,  /* [5312] */
    (xdc_Char)0x20,  /* [5313] */
    (xdc_Char)0x30,  /* [5314] */
    (xdc_Char)0x78,  /* [5315] */
    (xdc_Char)0x25,  /* [5316] */
    (xdc_Char)0x78,  /* [5317] */
    (xdc_Char)0x0,  /* [5318] */
    (xdc_Char)0x4c,  /* [5319] */
    (xdc_Char)0x4d,  /* [5320] */
    (xdc_Char)0x5f,  /* [5321] */
    (xdc_Char)0x73,  /* [5322] */
    (xdc_Char)0x6c,  /* [5323] */
    (xdc_Char)0x65,  /* [5324] */
    (xdc_Char)0x65,  /* [5325] */
    (xdc_Char)0x70,  /* [5326] */
    (xdc_Char)0x3a,  /* [5327] */
    (xdc_Char)0x20,  /* [5328] */
    (xdc_Char)0x74,  /* [5329] */
    (xdc_Char)0x73,  /* [5330] */
    (xdc_Char)0x6b,  /* [5331] */
    (xdc_Char)0x3a,  /* [5332] */
    (xdc_Char)0x20,  /* [5333] */
    (xdc_Char)0x30,  /* [5334] */
    (xdc_Char)0x78,  /* [5335] */
    (xdc_Char)0x25,  /* [5336] */
    (xdc_Char)0x78,  /* [5337] */
    (xdc_Char)0x2c,  /* [5338] */
    (xdc_Char)0x20,  /* [5339] */
    (xdc_Char)0x66,  /* [5340] */
    (xdc_Char)0x75,  /* [5341] */
    (xdc_Char)0x6e,  /* [5342] */
    (xdc_Char)0x63,  /* [5343] */
    (xdc_Char)0x3a,  /* [5344] */
    (xdc_Char)0x20,  /* [5345] */
    (xdc_Char)0x30,  /* [5346] */
    (xdc_Char)0x78,  /* [5347] */
    (xdc_Char)0x25,  /* [5348] */
    (xdc_Char)0x78,  /* [5349] */
    (xdc_Char)0x2c,  /* [5350] */
    (xdc_Char)0x20,  /* [5351] */
    (xdc_Char)0x74,  /* [5352] */
    (xdc_Char)0x69,  /* [5353] */
    (xdc_Char)0x6d,  /* [5354] */
    (xdc_Char)0x65,  /* [5355] */
    (xdc_Char)0x6f,  /* [5356] */
    (xdc_Char)0x75,  /* [5357] */
    (xdc_Char)0x74,  /* [5358] */
    (xdc_Char)0x3a,  /* [5359] */
    (xdc_Char)0x20,  /* [5360] */
    (xdc_Char)0x25,  /* [5361] */
    (xdc_Char)0x64,  /* [5362] */
    (xdc_Char)0x0,  /* [5363] */
    (xdc_Char)0x4c,  /* [5364] */
    (xdc_Char)0x44,  /* [5365] */
    (xdc_Char)0x5f,  /* [5366] */
    (xdc_Char)0x72,  /* [5367] */
    (xdc_Char)0x65,  /* [5368] */
    (xdc_Char)0x61,  /* [5369] */
    (xdc_Char)0x64,  /* [5370] */
    (xdc_Char)0x79,  /* [5371] */
    (xdc_Char)0x3a,  /* [5372] */
    (xdc_Char)0x20,  /* [5373] */
    (xdc_Char)0x74,  /* [5374] */
    (xdc_Char)0x73,  /* [5375] */
    (xdc_Char)0x6b,  /* [5376] */
    (xdc_Char)0x3a,  /* [5377] */
    (xdc_Char)0x20,  /* [5378] */
    (xdc_Char)0x30,  /* [5379] */
    (xdc_Char)0x78,  /* [5380] */
    (xdc_Char)0x25,  /* [5381] */
    (xdc_Char)0x78,  /* [5382] */
    (xdc_Char)0x2c,  /* [5383] */
    (xdc_Char)0x20,  /* [5384] */
    (xdc_Char)0x66,  /* [5385] */
    (xdc_Char)0x75,  /* [5386] */
    (xdc_Char)0x6e,  /* [5387] */
    (xdc_Char)0x63,  /* [5388] */
    (xdc_Char)0x3a,  /* [5389] */
    (xdc_Char)0x20,  /* [5390] */
    (xdc_Char)0x30,  /* [5391] */
    (xdc_Char)0x78,  /* [5392] */
    (xdc_Char)0x25,  /* [5393] */
    (xdc_Char)0x78,  /* [5394] */
    (xdc_Char)0x2c,  /* [5395] */
    (xdc_Char)0x20,  /* [5396] */
    (xdc_Char)0x70,  /* [5397] */
    (xdc_Char)0x72,  /* [5398] */
    (xdc_Char)0x69,  /* [5399] */
    (xdc_Char)0x3a,  /* [5400] */
    (xdc_Char)0x20,  /* [5401] */
    (xdc_Char)0x25,  /* [5402] */
    (xdc_Char)0x64,  /* [5403] */
    (xdc_Char)0x0,  /* [5404] */
    (xdc_Char)0x4c,  /* [5405] */
    (xdc_Char)0x44,  /* [5406] */
    (xdc_Char)0x5f,  /* [5407] */
    (xdc_Char)0x62,  /* [5408] */
    (xdc_Char)0x6c,  /* [5409] */
    (xdc_Char)0x6f,  /* [5410] */
    (xdc_Char)0x63,  /* [5411] */
    (xdc_Char)0x6b,  /* [5412] */
    (xdc_Char)0x3a,  /* [5413] */
    (xdc_Char)0x20,  /* [5414] */
    (xdc_Char)0x74,  /* [5415] */
    (xdc_Char)0x73,  /* [5416] */
    (xdc_Char)0x6b,  /* [5417] */
    (xdc_Char)0x3a,  /* [5418] */
    (xdc_Char)0x20,  /* [5419] */
    (xdc_Char)0x30,  /* [5420] */
    (xdc_Char)0x78,  /* [5421] */
    (xdc_Char)0x25,  /* [5422] */
    (xdc_Char)0x78,  /* [5423] */
    (xdc_Char)0x2c,  /* [5424] */
    (xdc_Char)0x20,  /* [5425] */
    (xdc_Char)0x66,  /* [5426] */
    (xdc_Char)0x75,  /* [5427] */
    (xdc_Char)0x6e,  /* [5428] */
    (xdc_Char)0x63,  /* [5429] */
    (xdc_Char)0x3a,  /* [5430] */
    (xdc_Char)0x20,  /* [5431] */
    (xdc_Char)0x30,  /* [5432] */
    (xdc_Char)0x78,  /* [5433] */
    (xdc_Char)0x25,  /* [5434] */
    (xdc_Char)0x78,  /* [5435] */
    (xdc_Char)0x0,  /* [5436] */
    (xdc_Char)0x4c,  /* [5437] */
    (xdc_Char)0x4d,  /* [5438] */
    (xdc_Char)0x5f,  /* [5439] */
    (xdc_Char)0x79,  /* [5440] */
    (xdc_Char)0x69,  /* [5441] */
    (xdc_Char)0x65,  /* [5442] */
    (xdc_Char)0x6c,  /* [5443] */
    (xdc_Char)0x64,  /* [5444] */
    (xdc_Char)0x3a,  /* [5445] */
    (xdc_Char)0x20,  /* [5446] */
    (xdc_Char)0x74,  /* [5447] */
    (xdc_Char)0x73,  /* [5448] */
    (xdc_Char)0x6b,  /* [5449] */
    (xdc_Char)0x3a,  /* [5450] */
    (xdc_Char)0x20,  /* [5451] */
    (xdc_Char)0x30,  /* [5452] */
    (xdc_Char)0x78,  /* [5453] */
    (xdc_Char)0x25,  /* [5454] */
    (xdc_Char)0x78,  /* [5455] */
    (xdc_Char)0x2c,  /* [5456] */
    (xdc_Char)0x20,  /* [5457] */
    (xdc_Char)0x66,  /* [5458] */
    (xdc_Char)0x75,  /* [5459] */
    (xdc_Char)0x6e,  /* [5460] */
    (xdc_Char)0x63,  /* [5461] */
    (xdc_Char)0x3a,  /* [5462] */
    (xdc_Char)0x20,  /* [5463] */
    (xdc_Char)0x30,  /* [5464] */
    (xdc_Char)0x78,  /* [5465] */
    (xdc_Char)0x25,  /* [5466] */
    (xdc_Char)0x78,  /* [5467] */
    (xdc_Char)0x2c,  /* [5468] */
    (xdc_Char)0x20,  /* [5469] */
    (xdc_Char)0x63,  /* [5470] */
    (xdc_Char)0x75,  /* [5471] */
    (xdc_Char)0x72,  /* [5472] */
    (xdc_Char)0x72,  /* [5473] */
    (xdc_Char)0x54,  /* [5474] */
    (xdc_Char)0x68,  /* [5475] */
    (xdc_Char)0x72,  /* [5476] */
    (xdc_Char)0x65,  /* [5477] */
    (xdc_Char)0x61,  /* [5478] */
    (xdc_Char)0x64,  /* [5479] */
    (xdc_Char)0x3a,  /* [5480] */
    (xdc_Char)0x20,  /* [5481] */
    (xdc_Char)0x25,  /* [5482] */
    (xdc_Char)0x64,  /* [5483] */
    (xdc_Char)0x0,  /* [5484] */
    (xdc_Char)0x4c,  /* [5485] */
    (xdc_Char)0x4d,  /* [5486] */
    (xdc_Char)0x5f,  /* [5487] */
    (xdc_Char)0x73,  /* [5488] */
    (xdc_Char)0x65,  /* [5489] */
    (xdc_Char)0x74,  /* [5490] */
    (xdc_Char)0x50,  /* [5491] */
    (xdc_Char)0x72,  /* [5492] */
    (xdc_Char)0x69,  /* [5493] */
    (xdc_Char)0x3a,  /* [5494] */
    (xdc_Char)0x20,  /* [5495] */
    (xdc_Char)0x74,  /* [5496] */
    (xdc_Char)0x73,  /* [5497] */
    (xdc_Char)0x6b,  /* [5498] */
    (xdc_Char)0x3a,  /* [5499] */
    (xdc_Char)0x20,  /* [5500] */
    (xdc_Char)0x30,  /* [5501] */
    (xdc_Char)0x78,  /* [5502] */
    (xdc_Char)0x25,  /* [5503] */
    (xdc_Char)0x78,  /* [5504] */
    (xdc_Char)0x2c,  /* [5505] */
    (xdc_Char)0x20,  /* [5506] */
    (xdc_Char)0x66,  /* [5507] */
    (xdc_Char)0x75,  /* [5508] */
    (xdc_Char)0x6e,  /* [5509] */
    (xdc_Char)0x63,  /* [5510] */
    (xdc_Char)0x3a,  /* [5511] */
    (xdc_Char)0x20,  /* [5512] */
    (xdc_Char)0x30,  /* [5513] */
    (xdc_Char)0x78,  /* [5514] */
    (xdc_Char)0x25,  /* [5515] */
    (xdc_Char)0x78,  /* [5516] */
    (xdc_Char)0x2c,  /* [5517] */
    (xdc_Char)0x20,  /* [5518] */
    (xdc_Char)0x6f,  /* [5519] */
    (xdc_Char)0x6c,  /* [5520] */
    (xdc_Char)0x64,  /* [5521] */
    (xdc_Char)0x50,  /* [5522] */
    (xdc_Char)0x72,  /* [5523] */
    (xdc_Char)0x69,  /* [5524] */
    (xdc_Char)0x3a,  /* [5525] */
    (xdc_Char)0x20,  /* [5526] */
    (xdc_Char)0x25,  /* [5527] */
    (xdc_Char)0x64,  /* [5528] */
    (xdc_Char)0x2c,  /* [5529] */
    (xdc_Char)0x20,  /* [5530] */
    (xdc_Char)0x6e,  /* [5531] */
    (xdc_Char)0x65,  /* [5532] */
    (xdc_Char)0x77,  /* [5533] */
    (xdc_Char)0x50,  /* [5534] */
    (xdc_Char)0x72,  /* [5535] */
    (xdc_Char)0x69,  /* [5536] */
    (xdc_Char)0x20,  /* [5537] */
    (xdc_Char)0x25,  /* [5538] */
    (xdc_Char)0x64,  /* [5539] */
    (xdc_Char)0x0,  /* [5540] */
    (xdc_Char)0x4c,  /* [5541] */
    (xdc_Char)0x44,  /* [5542] */
    (xdc_Char)0x5f,  /* [5543] */
    (xdc_Char)0x65,  /* [5544] */
    (xdc_Char)0x78,  /* [5545] */
    (xdc_Char)0x69,  /* [5546] */
    (xdc_Char)0x74,  /* [5547] */
    (xdc_Char)0x3a,  /* [5548] */
    (xdc_Char)0x20,  /* [5549] */
    (xdc_Char)0x74,  /* [5550] */
    (xdc_Char)0x73,  /* [5551] */
    (xdc_Char)0x6b,  /* [5552] */
    (xdc_Char)0x3a,  /* [5553] */
    (xdc_Char)0x20,  /* [5554] */
    (xdc_Char)0x30,  /* [5555] */
    (xdc_Char)0x78,  /* [5556] */
    (xdc_Char)0x25,  /* [5557] */
    (xdc_Char)0x78,  /* [5558] */
    (xdc_Char)0x2c,  /* [5559] */
    (xdc_Char)0x20,  /* [5560] */
    (xdc_Char)0x66,  /* [5561] */
    (xdc_Char)0x75,  /* [5562] */
    (xdc_Char)0x6e,  /* [5563] */
    (xdc_Char)0x63,  /* [5564] */
    (xdc_Char)0x3a,  /* [5565] */
    (xdc_Char)0x20,  /* [5566] */
    (xdc_Char)0x30,  /* [5567] */
    (xdc_Char)0x78,  /* [5568] */
    (xdc_Char)0x25,  /* [5569] */
    (xdc_Char)0x78,  /* [5570] */
    (xdc_Char)0x0,  /* [5571] */
    (xdc_Char)0x4c,  /* [5572] */
    (xdc_Char)0x4d,  /* [5573] */
    (xdc_Char)0x5f,  /* [5574] */
    (xdc_Char)0x73,  /* [5575] */
    (xdc_Char)0x65,  /* [5576] */
    (xdc_Char)0x74,  /* [5577] */
    (xdc_Char)0x41,  /* [5578] */
    (xdc_Char)0x66,  /* [5579] */
    (xdc_Char)0x66,  /* [5580] */
    (xdc_Char)0x69,  /* [5581] */
    (xdc_Char)0x6e,  /* [5582] */
    (xdc_Char)0x69,  /* [5583] */
    (xdc_Char)0x74,  /* [5584] */
    (xdc_Char)0x79,  /* [5585] */
    (xdc_Char)0x3a,  /* [5586] */
    (xdc_Char)0x20,  /* [5587] */
    (xdc_Char)0x74,  /* [5588] */
    (xdc_Char)0x73,  /* [5589] */
    (xdc_Char)0x6b,  /* [5590] */
    (xdc_Char)0x3a,  /* [5591] */
    (xdc_Char)0x20,  /* [5592] */
    (xdc_Char)0x30,  /* [5593] */
    (xdc_Char)0x78,  /* [5594] */
    (xdc_Char)0x25,  /* [5595] */
    (xdc_Char)0x78,  /* [5596] */
    (xdc_Char)0x2c,  /* [5597] */
    (xdc_Char)0x20,  /* [5598] */
    (xdc_Char)0x66,  /* [5599] */
    (xdc_Char)0x75,  /* [5600] */
    (xdc_Char)0x6e,  /* [5601] */
    (xdc_Char)0x63,  /* [5602] */
    (xdc_Char)0x3a,  /* [5603] */
    (xdc_Char)0x20,  /* [5604] */
    (xdc_Char)0x30,  /* [5605] */
    (xdc_Char)0x78,  /* [5606] */
    (xdc_Char)0x25,  /* [5607] */
    (xdc_Char)0x78,  /* [5608] */
    (xdc_Char)0x2c,  /* [5609] */
    (xdc_Char)0x20,  /* [5610] */
    (xdc_Char)0x6f,  /* [5611] */
    (xdc_Char)0x6c,  /* [5612] */
    (xdc_Char)0x64,  /* [5613] */
    (xdc_Char)0x43,  /* [5614] */
    (xdc_Char)0x6f,  /* [5615] */
    (xdc_Char)0x72,  /* [5616] */
    (xdc_Char)0x65,  /* [5617] */
    (xdc_Char)0x3a,  /* [5618] */
    (xdc_Char)0x20,  /* [5619] */
    (xdc_Char)0x25,  /* [5620] */
    (xdc_Char)0x64,  /* [5621] */
    (xdc_Char)0x2c,  /* [5622] */
    (xdc_Char)0x20,  /* [5623] */
    (xdc_Char)0x6f,  /* [5624] */
    (xdc_Char)0x6c,  /* [5625] */
    (xdc_Char)0x64,  /* [5626] */
    (xdc_Char)0x41,  /* [5627] */
    (xdc_Char)0x66,  /* [5628] */
    (xdc_Char)0x66,  /* [5629] */
    (xdc_Char)0x69,  /* [5630] */
    (xdc_Char)0x6e,  /* [5631] */
    (xdc_Char)0x69,  /* [5632] */
    (xdc_Char)0x74,  /* [5633] */
    (xdc_Char)0x79,  /* [5634] */
    (xdc_Char)0x20,  /* [5635] */
    (xdc_Char)0x25,  /* [5636] */
    (xdc_Char)0x64,  /* [5637] */
    (xdc_Char)0x2c,  /* [5638] */
    (xdc_Char)0x20,  /* [5639] */
    (xdc_Char)0x6e,  /* [5640] */
    (xdc_Char)0x65,  /* [5641] */
    (xdc_Char)0x77,  /* [5642] */
    (xdc_Char)0x41,  /* [5643] */
    (xdc_Char)0x66,  /* [5644] */
    (xdc_Char)0x66,  /* [5645] */
    (xdc_Char)0x69,  /* [5646] */
    (xdc_Char)0x6e,  /* [5647] */
    (xdc_Char)0x69,  /* [5648] */
    (xdc_Char)0x74,  /* [5649] */
    (xdc_Char)0x79,  /* [5650] */
    (xdc_Char)0x20,  /* [5651] */
    (xdc_Char)0x25,  /* [5652] */
    (xdc_Char)0x64,  /* [5653] */
    (xdc_Char)0x0,  /* [5654] */
    (xdc_Char)0x4c,  /* [5655] */
    (xdc_Char)0x44,  /* [5656] */
    (xdc_Char)0x5f,  /* [5657] */
    (xdc_Char)0x73,  /* [5658] */
    (xdc_Char)0x63,  /* [5659] */
    (xdc_Char)0x68,  /* [5660] */
    (xdc_Char)0x65,  /* [5661] */
    (xdc_Char)0x64,  /* [5662] */
    (xdc_Char)0x75,  /* [5663] */
    (xdc_Char)0x6c,  /* [5664] */
    (xdc_Char)0x65,  /* [5665] */
    (xdc_Char)0x3a,  /* [5666] */
    (xdc_Char)0x20,  /* [5667] */
    (xdc_Char)0x63,  /* [5668] */
    (xdc_Char)0x6f,  /* [5669] */
    (xdc_Char)0x72,  /* [5670] */
    (xdc_Char)0x65,  /* [5671] */
    (xdc_Char)0x49,  /* [5672] */
    (xdc_Char)0x64,  /* [5673] */
    (xdc_Char)0x3a,  /* [5674] */
    (xdc_Char)0x20,  /* [5675] */
    (xdc_Char)0x25,  /* [5676] */
    (xdc_Char)0x64,  /* [5677] */
    (xdc_Char)0x2c,  /* [5678] */
    (xdc_Char)0x20,  /* [5679] */
    (xdc_Char)0x77,  /* [5680] */
    (xdc_Char)0x6f,  /* [5681] */
    (xdc_Char)0x72,  /* [5682] */
    (xdc_Char)0x6b,  /* [5683] */
    (xdc_Char)0x46,  /* [5684] */
    (xdc_Char)0x6c,  /* [5685] */
    (xdc_Char)0x61,  /* [5686] */
    (xdc_Char)0x67,  /* [5687] */
    (xdc_Char)0x3a,  /* [5688] */
    (xdc_Char)0x20,  /* [5689] */
    (xdc_Char)0x25,  /* [5690] */
    (xdc_Char)0x64,  /* [5691] */
    (xdc_Char)0x2c,  /* [5692] */
    (xdc_Char)0x20,  /* [5693] */
    (xdc_Char)0x63,  /* [5694] */
    (xdc_Char)0x75,  /* [5695] */
    (xdc_Char)0x72,  /* [5696] */
    (xdc_Char)0x53,  /* [5697] */
    (xdc_Char)0x65,  /* [5698] */
    (xdc_Char)0x74,  /* [5699] */
    (xdc_Char)0x4c,  /* [5700] */
    (xdc_Char)0x6f,  /* [5701] */
    (xdc_Char)0x63,  /* [5702] */
    (xdc_Char)0x61,  /* [5703] */
    (xdc_Char)0x6c,  /* [5704] */
    (xdc_Char)0x3a,  /* [5705] */
    (xdc_Char)0x20,  /* [5706] */
    (xdc_Char)0x25,  /* [5707] */
    (xdc_Char)0x64,  /* [5708] */
    (xdc_Char)0x2c,  /* [5709] */
    (xdc_Char)0x20,  /* [5710] */
    (xdc_Char)0x63,  /* [5711] */
    (xdc_Char)0x75,  /* [5712] */
    (xdc_Char)0x72,  /* [5713] */
    (xdc_Char)0x53,  /* [5714] */
    (xdc_Char)0x65,  /* [5715] */
    (xdc_Char)0x74,  /* [5716] */
    (xdc_Char)0x58,  /* [5717] */
    (xdc_Char)0x3a,  /* [5718] */
    (xdc_Char)0x20,  /* [5719] */
    (xdc_Char)0x25,  /* [5720] */
    (xdc_Char)0x64,  /* [5721] */
    (xdc_Char)0x2c,  /* [5722] */
    (xdc_Char)0x20,  /* [5723] */
    (xdc_Char)0x63,  /* [5724] */
    (xdc_Char)0x75,  /* [5725] */
    (xdc_Char)0x72,  /* [5726] */
    (xdc_Char)0x4d,  /* [5727] */
    (xdc_Char)0x61,  /* [5728] */
    (xdc_Char)0x73,  /* [5729] */
    (xdc_Char)0x6b,  /* [5730] */
    (xdc_Char)0x4c,  /* [5731] */
    (xdc_Char)0x6f,  /* [5732] */
    (xdc_Char)0x63,  /* [5733] */
    (xdc_Char)0x61,  /* [5734] */
    (xdc_Char)0x6c,  /* [5735] */
    (xdc_Char)0x3a,  /* [5736] */
    (xdc_Char)0x20,  /* [5737] */
    (xdc_Char)0x25,  /* [5738] */
    (xdc_Char)0x64,  /* [5739] */
    (xdc_Char)0x0,  /* [5740] */
    (xdc_Char)0x4c,  /* [5741] */
    (xdc_Char)0x44,  /* [5742] */
    (xdc_Char)0x5f,  /* [5743] */
    (xdc_Char)0x6e,  /* [5744] */
    (xdc_Char)0x6f,  /* [5745] */
    (xdc_Char)0x57,  /* [5746] */
    (xdc_Char)0x6f,  /* [5747] */
    (xdc_Char)0x72,  /* [5748] */
    (xdc_Char)0x6b,  /* [5749] */
    (xdc_Char)0x3a,  /* [5750] */
    (xdc_Char)0x20,  /* [5751] */
    (xdc_Char)0x63,  /* [5752] */
    (xdc_Char)0x6f,  /* [5753] */
    (xdc_Char)0x72,  /* [5754] */
    (xdc_Char)0x65,  /* [5755] */
    (xdc_Char)0x49,  /* [5756] */
    (xdc_Char)0x64,  /* [5757] */
    (xdc_Char)0x3a,  /* [5758] */
    (xdc_Char)0x20,  /* [5759] */
    (xdc_Char)0x25,  /* [5760] */
    (xdc_Char)0x64,  /* [5761] */
    (xdc_Char)0x2c,  /* [5762] */
    (xdc_Char)0x20,  /* [5763] */
    (xdc_Char)0x63,  /* [5764] */
    (xdc_Char)0x75,  /* [5765] */
    (xdc_Char)0x72,  /* [5766] */
    (xdc_Char)0x53,  /* [5767] */
    (xdc_Char)0x65,  /* [5768] */
    (xdc_Char)0x74,  /* [5769] */
    (xdc_Char)0x4c,  /* [5770] */
    (xdc_Char)0x6f,  /* [5771] */
    (xdc_Char)0x63,  /* [5772] */
    (xdc_Char)0x61,  /* [5773] */
    (xdc_Char)0x6c,  /* [5774] */
    (xdc_Char)0x3a,  /* [5775] */
    (xdc_Char)0x20,  /* [5776] */
    (xdc_Char)0x25,  /* [5777] */
    (xdc_Char)0x64,  /* [5778] */
    (xdc_Char)0x2c,  /* [5779] */
    (xdc_Char)0x20,  /* [5780] */
    (xdc_Char)0x63,  /* [5781] */
    (xdc_Char)0x75,  /* [5782] */
    (xdc_Char)0x72,  /* [5783] */
    (xdc_Char)0x53,  /* [5784] */
    (xdc_Char)0x65,  /* [5785] */
    (xdc_Char)0x74,  /* [5786] */
    (xdc_Char)0x58,  /* [5787] */
    (xdc_Char)0x3a,  /* [5788] */
    (xdc_Char)0x20,  /* [5789] */
    (xdc_Char)0x25,  /* [5790] */
    (xdc_Char)0x64,  /* [5791] */
    (xdc_Char)0x2c,  /* [5792] */
    (xdc_Char)0x20,  /* [5793] */
    (xdc_Char)0x63,  /* [5794] */
    (xdc_Char)0x75,  /* [5795] */
    (xdc_Char)0x72,  /* [5796] */
    (xdc_Char)0x4d,  /* [5797] */
    (xdc_Char)0x61,  /* [5798] */
    (xdc_Char)0x73,  /* [5799] */
    (xdc_Char)0x6b,  /* [5800] */
    (xdc_Char)0x4c,  /* [5801] */
    (xdc_Char)0x6f,  /* [5802] */
    (xdc_Char)0x63,  /* [5803] */
    (xdc_Char)0x61,  /* [5804] */
    (xdc_Char)0x6c,  /* [5805] */
    (xdc_Char)0x3a,  /* [5806] */
    (xdc_Char)0x20,  /* [5807] */
    (xdc_Char)0x25,  /* [5808] */
    (xdc_Char)0x64,  /* [5809] */
    (xdc_Char)0x0,  /* [5810] */
    (xdc_Char)0x4c,  /* [5811] */
    (xdc_Char)0x4d,  /* [5812] */
    (xdc_Char)0x5f,  /* [5813] */
    (xdc_Char)0x62,  /* [5814] */
    (xdc_Char)0x65,  /* [5815] */
    (xdc_Char)0x67,  /* [5816] */
    (xdc_Char)0x69,  /* [5817] */
    (xdc_Char)0x6e,  /* [5818] */
    (xdc_Char)0x3a,  /* [5819] */
    (xdc_Char)0x20,  /* [5820] */
    (xdc_Char)0x68,  /* [5821] */
    (xdc_Char)0x77,  /* [5822] */
    (xdc_Char)0x69,  /* [5823] */
    (xdc_Char)0x3a,  /* [5824] */
    (xdc_Char)0x20,  /* [5825] */
    (xdc_Char)0x30,  /* [5826] */
    (xdc_Char)0x78,  /* [5827] */
    (xdc_Char)0x25,  /* [5828] */
    (xdc_Char)0x78,  /* [5829] */
    (xdc_Char)0x2c,  /* [5830] */
    (xdc_Char)0x20,  /* [5831] */
    (xdc_Char)0x66,  /* [5832] */
    (xdc_Char)0x75,  /* [5833] */
    (xdc_Char)0x6e,  /* [5834] */
    (xdc_Char)0x63,  /* [5835] */
    (xdc_Char)0x3a,  /* [5836] */
    (xdc_Char)0x20,  /* [5837] */
    (xdc_Char)0x30,  /* [5838] */
    (xdc_Char)0x78,  /* [5839] */
    (xdc_Char)0x25,  /* [5840] */
    (xdc_Char)0x78,  /* [5841] */
    (xdc_Char)0x2c,  /* [5842] */
    (xdc_Char)0x20,  /* [5843] */
    (xdc_Char)0x70,  /* [5844] */
    (xdc_Char)0x72,  /* [5845] */
    (xdc_Char)0x65,  /* [5846] */
    (xdc_Char)0x54,  /* [5847] */
    (xdc_Char)0x68,  /* [5848] */
    (xdc_Char)0x72,  /* [5849] */
    (xdc_Char)0x65,  /* [5850] */
    (xdc_Char)0x61,  /* [5851] */
    (xdc_Char)0x64,  /* [5852] */
    (xdc_Char)0x3a,  /* [5853] */
    (xdc_Char)0x20,  /* [5854] */
    (xdc_Char)0x25,  /* [5855] */
    (xdc_Char)0x64,  /* [5856] */
    (xdc_Char)0x2c,  /* [5857] */
    (xdc_Char)0x20,  /* [5858] */
    (xdc_Char)0x69,  /* [5859] */
    (xdc_Char)0x6e,  /* [5860] */
    (xdc_Char)0x74,  /* [5861] */
    (xdc_Char)0x4e,  /* [5862] */
    (xdc_Char)0x75,  /* [5863] */
    (xdc_Char)0x6d,  /* [5864] */
    (xdc_Char)0x3a,  /* [5865] */
    (xdc_Char)0x20,  /* [5866] */
    (xdc_Char)0x25,  /* [5867] */
    (xdc_Char)0x64,  /* [5868] */
    (xdc_Char)0x2c,  /* [5869] */
    (xdc_Char)0x20,  /* [5870] */
    (xdc_Char)0x69,  /* [5871] */
    (xdc_Char)0x72,  /* [5872] */
    (xdc_Char)0x70,  /* [5873] */
    (xdc_Char)0x3a,  /* [5874] */
    (xdc_Char)0x20,  /* [5875] */
    (xdc_Char)0x30,  /* [5876] */
    (xdc_Char)0x78,  /* [5877] */
    (xdc_Char)0x25,  /* [5878] */
    (xdc_Char)0x78,  /* [5879] */
    (xdc_Char)0x0,  /* [5880] */
    (xdc_Char)0x4c,  /* [5881] */
    (xdc_Char)0x44,  /* [5882] */
    (xdc_Char)0x5f,  /* [5883] */
    (xdc_Char)0x65,  /* [5884] */
    (xdc_Char)0x6e,  /* [5885] */
    (xdc_Char)0x64,  /* [5886] */
    (xdc_Char)0x3a,  /* [5887] */
    (xdc_Char)0x20,  /* [5888] */
    (xdc_Char)0x68,  /* [5889] */
    (xdc_Char)0x77,  /* [5890] */
    (xdc_Char)0x69,  /* [5891] */
    (xdc_Char)0x3a,  /* [5892] */
    (xdc_Char)0x20,  /* [5893] */
    (xdc_Char)0x30,  /* [5894] */
    (xdc_Char)0x78,  /* [5895] */
    (xdc_Char)0x25,  /* [5896] */
    (xdc_Char)0x78,  /* [5897] */
    (xdc_Char)0x0,  /* [5898] */
    (xdc_Char)0x78,  /* [5899] */
    (xdc_Char)0x64,  /* [5900] */
    (xdc_Char)0x63,  /* [5901] */
    (xdc_Char)0x2e,  /* [5902] */
    (xdc_Char)0x0,  /* [5903] */
    (xdc_Char)0x72,  /* [5904] */
    (xdc_Char)0x75,  /* [5905] */
    (xdc_Char)0x6e,  /* [5906] */
    (xdc_Char)0x74,  /* [5907] */
    (xdc_Char)0x69,  /* [5908] */
    (xdc_Char)0x6d,  /* [5909] */
    (xdc_Char)0x65,  /* [5910] */
    (xdc_Char)0x2e,  /* [5911] */
    (xdc_Char)0x0,  /* [5912] */
    (xdc_Char)0x4d,  /* [5913] */
    (xdc_Char)0x61,  /* [5914] */
    (xdc_Char)0x69,  /* [5915] */
    (xdc_Char)0x6e,  /* [5916] */
    (xdc_Char)0x0,  /* [5917] */
    (xdc_Char)0x4d,  /* [5918] */
    (xdc_Char)0x65,  /* [5919] */
    (xdc_Char)0x6d,  /* [5920] */
    (xdc_Char)0x6f,  /* [5921] */
    (xdc_Char)0x72,  /* [5922] */
    (xdc_Char)0x79,  /* [5923] */
    (xdc_Char)0x0,  /* [5924] */
    (xdc_Char)0x74,  /* [5925] */
    (xdc_Char)0x69,  /* [5926] */
    (xdc_Char)0x2e,  /* [5927] */
    (xdc_Char)0x73,  /* [5928] */
    (xdc_Char)0x79,  /* [5929] */
    (xdc_Char)0x73,  /* [5930] */
    (xdc_Char)0x62,  /* [5931] */
    (xdc_Char)0x69,  /* [5932] */
    (xdc_Char)0x6f,  /* [5933] */
    (xdc_Char)0x73,  /* [5934] */
    (xdc_Char)0x2e,  /* [5935] */
    (xdc_Char)0x6b,  /* [5936] */
    (xdc_Char)0x6e,  /* [5937] */
    (xdc_Char)0x6c,  /* [5938] */
    (xdc_Char)0x2e,  /* [5939] */
    (xdc_Char)0x54,  /* [5940] */
    (xdc_Char)0x61,  /* [5941] */
    (xdc_Char)0x73,  /* [5942] */
    (xdc_Char)0x6b,  /* [5943] */
    (xdc_Char)0x2e,  /* [5944] */
    (xdc_Char)0x49,  /* [5945] */
    (xdc_Char)0x64,  /* [5946] */
    (xdc_Char)0x6c,  /* [5947] */
    (xdc_Char)0x65,  /* [5948] */
    (xdc_Char)0x54,  /* [5949] */
    (xdc_Char)0x61,  /* [5950] */
    (xdc_Char)0x73,  /* [5951] */
    (xdc_Char)0x6b,  /* [5952] */
    (xdc_Char)0x0,  /* [5953] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[4] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x170b,  /* left */
        (xdc_Bits16)0x1710,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1719,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x171e,  /* right */
    },  /* [3] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0xd;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1742;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x4;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0xe;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__startupDoneFxn__C, ".const:xdc_runtime_Timestamp_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Types INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsEnabled__C, ".const:xdc_runtime_Types_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsIncluded__C, ".const:xdc_runtime_Types_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsMask__C, ".const:xdc_runtime_Types_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C = ((CT__xdc_runtime_Types_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gateObj__C, ".const:xdc_runtime_Types_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C = ((CT__xdc_runtime_Types_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gatePrms__C, ".const:xdc_runtime_Types_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C = ((CT__xdc_runtime_Types_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__id__C, ".const:xdc_runtime_Types_Module__id__C");
__FAR__ const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C = (xdc_Bits16)0xf;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerDefined__C, ".const:xdc_runtime_Types_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerObj__C, ".const:xdc_runtime_Types_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C = ((CT__xdc_runtime_Types_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn0__C, ".const:xdc_runtime_Types_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C = ((CT__xdc_runtime_Types_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn1__C, ".const:xdc_runtime_Types_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C = ((CT__xdc_runtime_Types_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn2__C, ".const:xdc_runtime_Types_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C = ((CT__xdc_runtime_Types_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn4__C, ".const:xdc_runtime_Types_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C = ((CT__xdc_runtime_Types_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn8__C, ".const:xdc_runtime_Types_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C = ((CT__xdc_runtime_Types_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__startupDoneFxn__C, ".const:xdc_runtime_Types_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Types_Module__startupDoneFxn xdc_runtime_Types_Module__startupDoneFxn__C = ((CT__xdc_runtime_Types_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__count__C, ".const:xdc_runtime_Types_Object__count__C");
__FAR__ const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__heap__C, ".const:xdc_runtime_Types_Object__heap__C");
__FAR__ const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__sizeof__C, ".const:xdc_runtime_Types_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__table__C, ".const:xdc_runtime_Types_Object__table__C");
__FAR__ const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)xdc_runtime_Main_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Main_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    xdc_runtime_Main_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysCallback */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysCallback_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysCallback_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysCallback_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysCallback_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysCallback_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysCallback_ready();
}


/*
 * ======== ti.sysbios.family.arm.cc26xx.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_cc26xx_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_cc26xx_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_cc26xx_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_cc26xx_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_cc26xx_Timer_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_cc26xx_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_cc26xx_Timer___S1) - sizeof(ti_sysbios_family_arm_cc26xx_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_cc26xx_Timer_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_arm_cc26xx_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_cc26xx_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Mailbox OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Mailbox_Object2__ s0; char c; } ti_sysbios_knl_Mailbox___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__DESC__C, ".const:ti_sysbios_knl_Mailbox_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Mailbox_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Mailbox_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Mailbox___S1) - sizeof(ti_sysbios_knl_Mailbox_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Mailbox_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Mailbox_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Mailbox_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.LoggerCallback OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_LoggerCallback_Object2__ s0; char c; } xdc_runtime_LoggerCallback___S1;
#pragma DATA_SECTION(xdc_runtime_LoggerCallback_Object__DESC__C, ".const:xdc_runtime_LoggerCallback_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerCallback_Object__DESC__C = {
    (xdc_Ptr)&xdc_runtime_LoggerCallback_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_LoggerCallback_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_LoggerCallback___S1) - sizeof(xdc_runtime_LoggerCallback_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_LoggerCallback_Object2__), /* objSize */
    (xdc_Ptr)&xdc_runtime_LoggerCallback_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_LoggerCallback_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module __mod, const xdc_runtime_IHeap_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IHeap_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IHeap_Params), __eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module __mod, const xdc_runtime_IGateProvider_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IGateProvider_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IGateProvider_Params), __eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.ILogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_ILogger_Handle xdc_runtime_ILogger_create( xdc_runtime_ILogger_Module __mod, const xdc_runtime_ILogger_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_ILogger_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_ILogger_Params), __eb);
}

/* delete */
void xdc_runtime_ILogger_delete( xdc_runtime_ILogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.family.arm.cc26xx.Boot SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_cc26xx_Boot_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.cc26xx.Power SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_cc26xx_Power_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_cc26xx_Power_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 27;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Event_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Event_Object__ *)ti_sysbios_knl_Event_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Event___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *__obj, const ti_sysbios_knl_Event_Params *__paramsPtr )
{
    ti_sysbios_knl_Event_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Event_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_destructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    ti_sysbios_knl_Event_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_knl_Event_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle* instp)
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_knl_Event_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.CC26xx SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_rom_cortexm_cc26xx_CC26xx_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.LoggerCallback SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerCallback_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerCallback_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerCallback_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerCallback_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerCallback_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerCallback_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerCallback_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerCallback_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerCallback_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerCallback_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerCallback_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerCallback_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerCallback_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerCallback_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerCallback_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerCallback_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerCallback_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerCallback_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerCallback_Module__startupDone__S( void )
{
    return xdc_runtime_LoggerCallback_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_LoggerCallback_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 8;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_LoggerCallback_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_LoggerCallback_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_LoggerCallback_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((xdc_runtime_LoggerCallback_Object__ *)oa) + i;
    }

    if (xdc_runtime_LoggerCallback_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_LoggerCallback_Object__ *)xdc_runtime_LoggerCallback_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_LoggerCallback_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_LoggerCallback_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_LoggerCallback_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_LoggerCallback_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_LoggerCallback_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_LoggerCallback_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_LoggerCallback___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    xdc_runtime_LoggerCallback_Params __prms;
    xdc_runtime_LoggerCallback_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerCallback_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_LoggerCallback_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    xdc_runtime_LoggerCallback_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
xdc_runtime_LoggerCallback_Handle xdc_runtime_LoggerCallback_create( const xdc_runtime_LoggerCallback_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    xdc_runtime_LoggerCallback_Params __prms;
    xdc_runtime_LoggerCallback_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerCallback_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_LoggerCallback_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    xdc_runtime_LoggerCallback_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void xdc_runtime_LoggerCallback_construct(xdc_runtime_LoggerCallback_Struct *__obj, const xdc_runtime_LoggerCallback_Params *__paramsPtr )
{
    xdc_runtime_LoggerCallback_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&xdc_runtime_LoggerCallback_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_LoggerCallback_Params), NULL);
    /* module-specific initialization */
    xdc_runtime_LoggerCallback_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void xdc_runtime_LoggerCallback_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_destructObject__I(&xdc_runtime_LoggerCallback_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void xdc_runtime_LoggerCallback_destruct(xdc_runtime_LoggerCallback_Struct *obj)
{
    xdc_runtime_LoggerCallback_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void xdc_runtime_LoggerCallback_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Error_raiseX(NULL, xdc_runtime_LoggerCallback_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}

/* delete */
void xdc_runtime_LoggerCallback_delete(xdc_runtime_LoggerCallback_Handle* instp)
{
    xdc_runtime_Error_raiseX(NULL, xdc_runtime_LoggerCallback_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}


/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysCallback_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}


/*
 * ======== xdc.runtime.Types SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Types_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

