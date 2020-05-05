/* ACS722 
 * CPP file for ACS722 Current Sensor 
 * Written by Frank Cummins
 * 
 * 2020-04-05: Initial draft
 *
 * See the example sketches to learn how to use the library in your code.
*/

// =================================================================================== //
//
// Includes
//
// =================================================================================== //

#include <ACS722.h>

// =================================================================================== //
//
// Constructor
//
// =================================================================================== //

ACS722::ACS722(int pin)
{
	_pin = pin;
}

// =================================================================================== //
//
// Public Functions
//
// =================================================================================== //

/*
* Description: 
*   Method to setup the sensor
* Parameters:
*   adcResolution - integer with number of bits for ADC resolution
* Returns:
*   none  
*/
void begin(int adcResolution)
{
    analogReadResolution(adcResolution);
}

// ----------------------------------------------------------------------------------- //

/*
* Description: 
*	Method to get the current reading
* Parameters:
*	none
* Returns:
* 	reading  - float with current in milliamps
*/
float ACS722::getCurrentReading()
{
	int adcValue = analogRead(_pin);

    return (6.82f * adcValue) - 2746.98f;
}

// ----------------------------------------------------------------------------------- //

// =================================================================================== //
//
// Private Functions
//
// =================================================================================== //

// None

// ----------------------------------------------------------------------------------- //
