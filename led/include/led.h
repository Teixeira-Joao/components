#ifndef LED_H
#define LED_H

#include <stdint.h>

typedef struct led_ctr
{
    uint8_t pin;
    uint8_t led_status : 1;
    uint8_t free_bits  : 7;
} led_ctr_t;

void init_led(uint8_t pin, led_ctr_t *p_me);
void turn_led_on(led_ctr_t *p_me);
void turn_led_off(led_ctr_t *p_me);


#endif
