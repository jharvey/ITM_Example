#include <stdio.h>
#include <string.h>
#include <ch.h>
#include <hal.h>
#include <chprintf.h>
#include "shell.h"
#include "stm32F4xx.h"

int main(void) {
  /*
   * System initializations.
   * - HAL initialization, this also initializes the configured device drivers
   *   and performs the board-specific initializations.
   * - Kernel initialization, the main() function becomes a thread and the
   *   RTOS is active.
   */
  halInit();
  chSysInit();


  // loop forever, processing serial inputs
  while (true) {
    palClearPad(GPIOD, 15U);  // Clear the pad to make LED bright
    chThdSleepMilliseconds(500);
    palSetPad(GPIOD, 15U);    // Set the pad to make LED dim
    chThdSleepMilliseconds(500);

    // Debug, send some character to ITM and see if they make it.
    int i;
    if((0x30>i) || (i>0x39)) i = 0x30;
    ITM_SendChar(i);
    ITM_SendChar(' ');
    ITM_SendChar('H');
    ITM_SendChar('E');
    ITM_SendChar('L');
    ITM_SendChar('L');
    ITM_SendChar('O');
    ITM_SendChar('_');
    ITM_SendChar('W');
    ITM_SendChar('O');
    ITM_SendChar('R');
    ITM_SendChar('L');
    ITM_SendChar('D');
    ITM_SendChar('\n');
    i++;
  }  // while true

  return 0;

} // main()

