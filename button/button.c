#include <stdio.h>
#include "button.h"


void init_button(int pin, button_ctr_t *p_button_ctl)
{
    /**
     * @file button.c
     * @brief Initializes and attach a GPIO pin to input button type
     * @param pin is the GPIO pin desired
     * @param p_button_ctl is a pointer to a button definition structure
     */
    p_button_ctl->pin = pin;

    gpio_set_direction(p_button_ctl->pin, GPIO_MODE_INPUT);
    gpio_reset_pin(p_button_ctl->pin);
    gpio_set_pull_mode(p_button_ctl->pin, GPIO_PULLUP_ONLY);
}

void read_button(button_ctr_t *p_button_ctl)
/**
 * @file button.c
 * @brief Reads a given input and updates the status of the button whether pressed (p_button_ctl->pressed = 1) or not (p_button_ctl->pressed = 0)
 * @param p_button_ctl is a pointer to a button definition structure
 */
{
    p_button_ctl->pressed = 1 ? gpio_get_level(p_button_ctl->pin) == 0 : 0;
}

void func(void)
{

}
