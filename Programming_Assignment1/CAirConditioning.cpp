#include <iostream>
#include "CAirConditioning.h"

CAirConditioning::CAirConditioning(
	int			id,
	std::string name,
	std::string manufacturer,
	double		temp,
	bool		status,
	bool		connection
)
	: CDevice(id, name, manufacturer, status, connection),
				mTargetTemperature(temp)
{
}

void CAirConditioning::interactionEvent()
{
	// Check if device is active & connected
	if (!getStatus() || !CheckConnection())
	{
		std::cout << "Air conditioning is inactive &/or not connected. Please activate & connect the air conditioning first." << std::endl;
	}
	else
	{
		// Allow the user to set the target temperature
		std::cout << "Current target temperature: "
				  << mTargetTemperature << "*C"
				  << std::endl
				  << "Enter new target temperature: ";

		// Get user input for new target temperature
		double newTemp;
		std::cin >> newTemp;

		// Validate the user input
		if (validateTemperature(newTemp))
		{
			// Round to 1dp & update the target temperature
			mTargetTemperature = std::round(newTemp * 10.0) / 10.0;
			std::cout << "Target temperature updated successfully." << std::endl;
		}

	}
}

void CAirConditioning::viewInfo()
{
	CDevice::viewInfo(); // Call base class to display common device information

	std::cout << "Target Temperature: " << mTargetTemperature << std::endl;
}

bool CAirConditioning::validateTemperature(double temp)
{
	// Check if value is within reasonable bounds & is a number
	if (std::isnan(temp) || temp < 0.0 || temp > 30.0)
	{
		std::cout << "Invalid temperature. Valid temperature values are between 0.0 & 30.0 degrees Celsius." << std::endl << "Please try interacting with the device again." << std::endl;
		return false;
	}

	// Temperature is valid
	return true;
}
