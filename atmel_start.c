#include <atmel_start.h>

/**
 * Initializes MCU, drivers and middleware in the project
**/
void atmel_start_init(void)
{
	system_init();

  // enable PCIE1
	PCICR = (1 << PCIE1);
	// enable interrupt on INT13
	PCMSK1 = (1 << PCINT13);
}
