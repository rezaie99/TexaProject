 // #define xdc_runtime_Log_DISABLE_ALL  /*disable all log output data*/

#include <xdc/runtime/Error.h>

#include <ti/sysbios/family/arm/cc26xx/Power.h>
#include <ti/sysbios/BIOS.h>

#include "ICall.h"
#include "bcomdef.h"
#include "peripheral.h"
#include "ProjectZero.h"

#include <ti/drivers/UART.h>
#include <uart_logs.h>
#include <string.h>

#ifndef USE_DEFAULT_USER_CFG
#include "bleUserConfig.h"
// BLE user defined configuration
bleUserCfg_t user0Cfg = BLE_USER_CFG;
#endif // USE_DEFAULT_USER_CFG

/**
 * Exception handler
 */
void exceptionHandler()
{
  volatile uint8_t i = 1;
  while(i){}
}


/*
 *  ======== main ========
 */
int main()
{
  PIN_init(BoardGpioInitTable);

#ifndef POWER_SAVING
    /* Set constraints for Standby, powerdown and idle mode */
    Power_setConstraint(Power_SB_DISALLOW);
    Power_setConstraint(Power_IDLE_PD_DISALLOW);
#endif // POWER_SAVING

    /* Initialize the RTOS Log formatting and output to UART in Idle thread.
     * Note: Define xdc_runtime_Log_DISABLE_ALL to remove all impact of Log.
     * Note: NULL as Params gives 115200,8,N,1 and Blocking mode */
    UartLog_init(UART_open(Board_UART, NULL));

    /* Initialize ICall module */
    ICall_init();

    /* Start tasks of external images - Priority 5 */
    ICall_createRemoteTasks();

    /* Kick off profile - Priority 3 */
    GAPRole_createTask();

    /* User task - Priority 1 */
    ProjectZero_createTask();

//////////////////////////*//////////////////////////
    SPI_Init_PZ();
    SW_interrupt_init();
//////////////////////////*//////////////////////////

  /* enable interrupts and start SYS/BIOS */
    BIOS_start();

    return 0;
}

/**
 * Error handled to be hooked into TI-RTOS
 */
Void smallErrorHook(Error_Block *eb)
{
  for (;;);
}

/**
 * HAL assert handler required by OSAL memory module.
 */
void halAssertHandler(void)
{
  for (;;);
}

