/* ACS722 
 * Header file for ACS722 Current Sensor 
 * Written by Frank Cummins
 * 
 * 2020-04-05: Initial draft
 *
 * See the example sketches to learn how to use the library in your code.
*/

#ifndef ACS722
#define ACS722

#include <Arduino.h>	// Arduino Library

// DEFINES
#define ADC_RESOLUTION 12

// CLASS DEFINITION
class ACS722
{
	public:

		// Constructor
		ACS722(int pin);

		// Method to setup the sensor
		void begin(int adcResolution);

		// Method to get the current reading
		float getCurrentReading();

	private:

		// Analog to Digital Converter Pin
		int _pin;
};

#endif
