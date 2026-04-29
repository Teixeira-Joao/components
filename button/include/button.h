#ifndef BUTTON_H
#define BUTTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "driver/gpio.h"

typedef struct button_ctr
{
    uint8_t pin;
    uint8_t pressed : 1;
    uint8_t free_bits: 7;


}button_ctr_t;

void init_button(int pin, button_ctr_t *p_button_ctl);
void read_button(button_ctr_t *p_button_ctl);

#endif
