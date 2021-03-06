/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <port.h>

/**
 * \brief Set HEART pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void HEART_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(PORTB0, pull_mode);
}

/**
 * \brief Set HEART data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void HEART_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(PORTB0, dir);
}

/**
 * \brief Set HEART level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void HEART_set_level(const bool level)
{
	PORTB_set_pin_level(PORTB0, level);
}

/**
 * \brief Toggle output level on HEART
 *
 * Toggle the pin level
 */
static inline void HEART_toggle_level()
{
	PORTB_toggle_pin_level(PORTB0);
}

/**
 * \brief Get level on HEART
 *
 * Reads the level on a pin
 */
static inline bool HEART_get_level()
{
	return PORTB_get_pin_level(PORTB0);
}

/**
 * \brief Set SPEEKER pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SPEEKER_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(PORTB1, pull_mode);
}

/**
 * \brief Set SPEEKER data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SPEEKER_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(PORTB1, dir);
}

/**
 * \brief Set SPEEKER level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SPEEKER_set_level(const bool level)
{
	PORTB_set_pin_level(PORTB1, level);
}

/**
 * \brief Toggle output level on SPEEKER
 *
 * Toggle the pin level
 */
static inline void SPEEKER_toggle_level()
{
	PORTB_toggle_pin_level(PORTB1);
}

/**
 * \brief Get level on SPEEKER
 *
 * Reads the level on a pin
 */
static inline bool SPEEKER_get_level()
{
	return PORTB_get_pin_level(PORTB1);
}

/**
 * \brief Set BUTTON pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void BUTTON_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(PORTC5, pull_mode);
}

/**
 * \brief Set BUTTON data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void BUTTON_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(PORTC5, dir);
}

/**
 * \brief Set BUTTON level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void BUTTON_set_level(const bool level)
{
	PORTC_set_pin_level(PORTC5, level);
}

/**
 * \brief Toggle output level on BUTTON
 *
 * Toggle the pin level
 */
static inline void BUTTON_toggle_level()
{
	PORTC_toggle_pin_level(PORTC5);
}

/**
 * \brief Get level on BUTTON
 *
 * Reads the level on a pin
 */
static inline bool BUTTON_get_level()
{
	return PORTC_get_pin_level(PORTC5);
}

/**
 * \brief Set GLOW pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void GLOW_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(PORTD3, pull_mode);
}

/**
 * \brief Set GLOW data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void GLOW_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(PORTD3, dir);
}

/**
 * \brief Set GLOW level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void GLOW_set_level(const bool level)
{
	PORTD_set_pin_level(PORTD3, level);
}

/**
 * \brief Toggle output level on GLOW
 *
 * Toggle the pin level
 */
static inline void GLOW_toggle_level()
{
	PORTD_toggle_pin_level(PORTD3);
}

/**
 * \brief Get level on GLOW
 *
 * Reads the level on a pin
 */
static inline bool GLOW_get_level()
{
	return PORTD_get_pin_level(PORTD3);
}

#endif // ATMEL_START_PINS_H_INCLUDED
