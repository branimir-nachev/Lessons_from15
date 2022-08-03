#ifndef __DELAY_H__
#define __DELAY_H__

#define SYS_CLOCK_HZ 16000000U

#define LED_RED   (1U << 1)
#define LED_BLUE  (1U << 2)
#define LED_GREEN (1U << 3)


void delay(int volatile iter);

#endif // __DELAY_H__
