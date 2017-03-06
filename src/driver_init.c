/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <system.h>

void tc8_0_init(void)
{

	TIMER_0_init();
}

void tc8_2_init(void)
{

	// Set pin direction to output
	PD3_set_dir(PORT_DIR_OUT);

	PD3_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	TIMER_1_init();
}

void system_init()
{
	mcu_init();

	// PORT on PB0

	// Set pin direction to output
	LED_set_dir(PORT_DIR_OUT);

	LED_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	sysctrl_init();

	tc8_0_init();

	tc8_2_init();
}
