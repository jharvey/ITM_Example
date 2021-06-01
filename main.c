#include <stdio.h>
#include <string.h>
#include <ch.h>
#include <hal.h>
#include <chprintf.h>
#include "shell.h"
#include "stm32F407xx.h"

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
	palClearPad(GPIOE, 3U);  // Clear the pad to make LED bright
	chThdSleepMilliseconds(500);
	palSetPad(GPIOE, 3U);    // Set the pad to make LED dim
	chThdSleepMilliseconds(500);

	// Debug, send some character to ITM and see if they make it.
	ITM_SendChar('*');

  }  // while true

  return 0;

} // main()

