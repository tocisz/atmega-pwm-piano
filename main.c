#include <atmel_start.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	sei();

	set_sleep_mode(SLEEP_MODE_IDLE);
	sleep_enable();
	while (1) {
		sleep_mode();
	}
}
