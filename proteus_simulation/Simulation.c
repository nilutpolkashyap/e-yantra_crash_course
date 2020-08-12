/*! \mainpage Week-1 Simulation: Bar-graph LED Blinking
 *
 * @author     e-Yantra Team
 * @date       2020/02/12
 *
 * \subsection Aim
 * To blink the 6th Bar-graph LED at an interval of 1 second.
 *
 * \subsection Connections
 * Bar-graph LED 6				:  PJ5 				<br>
 *
 */


//---------------------------------- HEADER FILES -----------------------------------------------------
#include "firebird_simulation.h"			// Header file included that contains macro definitions essential for Firebird V robot
#include <util/delay.h>						// Standard AVR Delay Library

//---------------------------------- FUNCTIONS ----------------------------------------------------------
// << TODO >> : Complete all the functions and their input arguments correctly as they might have errors


/**
 * @brief      Makes 6th Bar-graph LED pins as output and initially sets 6th Bar-graph LED as low (OFF)
 */
void bar_graph_led_6_pin_config(void) {
	
	// Makes 6th Bar-graph LED pins as output
	bar_graph_led_ddr_reg	= 0x20;
	
	// Sets 6th Bar-graph LED as low (OFF)
	bar_graph_led_port_reg	= 0x00;
}


/**
 * @brief      Sets 6th Bar-graph LED pin as high (ON)
 */
void bar_graph_led_6_on(void) {
	
	// Sets 6th Bar-graph LED as high (ON)
	bar_graph_led_port_reg	= 0x20;
}


/**
 * @brief      Sets 6th Bar-graph LED pin as low (OFF)
 */
void bar_graph_led_6_off(void) {
	
	// Sets 6th Bar-graph LED as low (OFF)
	bar_graph_led_port_reg	= 0x00;
}


//---------------------------------- MAIN ----------------------------------------------------------------
/**
 * @brief      Main Function
 *
 * @details    First Initializes 6th Bar-graph LED and sets 6th Bar-graph LED as low (OFF)
 *			   by calling bar_graph_led_6_pin_config() function.
 *			   The 6th Bar-graph LED will turn ON and OFF at an interval of a second inside while loop.
 */
int main(void) {
	
	// << NOTE >> : You are not allowed to modify or change anything inside this function
	
	bar_graph_led_6_pin_config();		// Initialize the 6th Bar-graph LED
	
	while (1)
	{
		bar_graph_led_6_on();			// Turn ON 6th Bar-graph LED
		_delay_ms(1000);
		
		bar_graph_led_6_off();			// Turn OFF 6th Bar-graph LED
		_delay_ms(1000);
	}
}
//---------------------------------- END ------------------------------------------------------------------
