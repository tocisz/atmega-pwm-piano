/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include <atmel_start.h>
#include <compiler.h>

uint8_t cnt = 0;
uint8_t power = 0;
int8_t dir = 1;

ISR(TIMER0_OVF_vect)
{
	OCR2B = power;
	power += dir;
	if (power == 0xff || (power == 0)) {
		dir = -dir;
	}

	if (++cnt == 0) {
		LED_toggle_level();
	}
}

#include "freq.h"
uint8_t idx = 0;

ISR(TIMER1_COMPA_vect)
{
	OCR1A = freq_seq[idx];
	idx = (idx+1) % freq_seq_len;
}

ISR(PCI1_vect)
{

}
