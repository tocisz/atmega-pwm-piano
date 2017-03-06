#include <atmel_start.h>
#include <avr/eeprom.h>
#include "freq.h"

uint16_t EEMEM ee_freq_seq[MAX_SEQ_LEN] = {65000,C3,0};
uint16_t freq_seq_len;
uint16_t freq_seq[MAX_SEQ_LEN];

void load_freq_table(void) {
	uint16_t freq;
	const uint16_t *ptr = ee_freq_seq;
	uint8_t i = 0;
	while (i < MAX_SEQ_LEN) {
		freq = eeprom_read_word(ptr++);
		if (freq == 0) {
			break;
		}
		freq_seq[i++] = freq;
	}
	freq_seq_len = i;
}

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	load_freq_table();
	sei();

	OCR1A = freq_seq[0]; // 220Hz

	set_sleep_mode(SLEEP_MODE_IDLE);
	sleep_enable();
	while (1) {
		sleep_mode();
	}
}
