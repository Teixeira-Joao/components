#include <stdio.h>
#include "button.h"

#include "driver/gpio.h"

void init_button(uint8_t pin, button_ctr_t *p_me)
{
    /**
     * @file button.c
     * @brief Initializes and attach a GPIO pin to input button type
     * @param pin is the GPIO pin desired
     * @param p_me is a pointer to a button definition structure
     * @version v_1.0.0
     * @author JTX
     */
    p_me->pin = pin;

    gpio_reset_pin(p_me->pin);
    gpio_set_direction(p_me->pin, GPIO_MODE_DEF_INPUT);
    gpio_set_pull_mode(p_me->pin, GPIO_PULLUP_ONLY);
}

void read_button(button_ctr_t *p_me)
/**
 * @file button.c
 * @brief Reads a given input and updates the status of the button whether pressed (p_me->pressed = 1) or not (p_me->pressed = 0)
 * @param p_me is a pointer to a button definition structure
 * @version v_1.0.0
 * @author JTX
 */
{
    p_me->pressed = 1 ? gpio_get_level(p_me->pin) == 0 : 0;
}
