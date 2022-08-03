#include <bsp.h>
#include <stdint.h>

#include "tm4c_cmsis.h"

#define SYS_CLOCK_HZ 16000000U

#define LED_RED   (1U << 1)
#define LED_BLUE  (1U << 2)
#define LED_GREEN (1U << 3)

int16_t x = -1;
uint32_t y = LED_RED | LED_GREEN;


int main()
{

    SYSCTL->RCGC2 |= (1U << 5);  /* enable clock for GPIOF */
    SYSCTL->GPIOHSCTL |= (1U << 5); /* enable AHB for GPIOF */
    GPIOF_HS->DIR |= (LED_RED | LED_BLUE | LED_GREEN);
    GPIOF_HS->DEN |= (LED_RED | LED_BLUE | LED_GREEN);

    SysTick->LOAD = SYS_CLOCK_HZ/2U - 1U;
    SysTick->VAL = 0U;
    SysTick->CTRL = (1U << 2) | (1U << 1) | 1U;


//    GPIOF_HS->DATA_Bits[LED_BLUE] = LED_BLUE;
    while (1) {

    }
    //return 0;
}
