#include <atmel_start.h>
#include <avr/wdt.h>

#include "sound.h"

/////////////////// GOLW //////////////////
uint8_t power = 0;
int8_t dir = 1;

static inline void animate_glow(void) {
	TIMER_1_set_comp_b(power);
	power += dir;
	if (power == 0xff || (power == 0)) {
		dir = -dir;
	}
}
///////////////////////////////////////////

#include "events.h"

bool playing = false;

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	set_sleep_mode(SLEEP_MODE_IDLE);

	init_sound();
	sei();

	while (1) {

		ATOMIC_BLOCK(ATOMIC_FORCEON) {
			if (is_button_change()) {
				clear_button_change();
				if (button_state_on) {
					NONATOMIC_BLOCK(NONATOMIC_FORCEOFF) {
						if (!playing) {
							next_melody();
							start_play();
						} else {
							stop_play();
						}
						playing = !playing;
						HEART_set_level(playing);
					}
				}
			}

			if (is_new_sound_cycle()) {
				clear_new_sound_cycle();
				NONATOMIC_BLOCK(NONATOMIC_FORCEOFF) {
					start_new_cycle();
				}
			}

			if (is_new_512hz_cycle()) {
				clear_new_512hz_cycle();
				NONATOMIC_BLOCK(NONATOMIC_FORCEOFF) {
					wdt_reset();
					animate_glow();
					sound_scheduler();
				}
			}

			if (is_finished_playing()) {
				clear_finished_playing();
				NONATOMIC_BLOCK(NONATOMIC_FORCEOFF) {
					playing = false;
					HEART_set_level(playing);
				}
			}
		}

		sleep_mode();

	}
}
