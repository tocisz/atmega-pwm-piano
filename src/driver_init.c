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
	GLOW_set_dir(PORT_DIR_OUT);

	GLOW_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	TIMER_1_init();
}

void tc16_1_init(void)
{

	// Set pin direction to output
	SPEEKER_set_dir(PORT_DIR_OUT);

	SPEEKER_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	TIMER_2_init();
}

void system_init()
{
	mcu_init();

	// PORT on PB0

	// Set pin direction to output
	HEART_set_dir(PORT_DIR_OUT);

	HEART_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	// PORT on PC5

	// Set pin direction to input
	BUTTON_set_dir(PORT_DIR_IN);

	BUTTON_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_UP);

	sysctrl_init();

	WDT_0_init();

	tc8_0_init();

	tc8_2_init();

	tc16_1_init();
}
