#include <stdio.h>
#include "led.h"

#include "driver/gpio.h"


void init_led(uint8_t pin, led_ctr_t *p_me)
{
    /**
     * @file led.c
     * @brief Initializes and attach a GPIO pin to output led type
     * @param pin is the GPIO pin desired
     * @param p_me is a pointer to a led definition structure
     * @version v_1.0.0
     * @author JTX
     */
    p_me->pin = pin;
    gpio_reset_pin(p_me->pin);    
    gpio_set_direction(p_me->pin, GPIO_MODE_DEF_OUTPUT);
}


void turn_led_on(led_ctr_t *p_me)
{
    /**
     * @file led.c
     * @brief turns a led ON in 100% of its bright
     * @param p_me is a pointer to a led definition structure
     * @version v_1.0.0
     * @author JTX
     */
    gpio_set_level(p_me->pin, 1);
    p_me->led_status = 1;
}


void turn_led_off(led_ctr_t *p_me)
{
    /**
     * @file led.c
     * @brief turns a led OFF in 100% of its bright
     * @param p_me is a pointer to a led definition structure
     * @version v_1.0.0
     * @author JTX
     */
    gpio_set_level(p_me->pin, 0);
    p_me->led_status = 0;
}