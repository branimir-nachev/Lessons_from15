/* Board Support Package */
#include "tm4c_cmsis.h"

void assert_failed (char const *file, int line)
{
  /* TBD: damage control */
  NVIC_SystemReset(); /* reset the system */
}

void SysTick_Handler(void) {
}
