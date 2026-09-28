#include <iostream>
#include "CProjector.h"

CProjector::CProjector(
	int			id,
	std::string name,
	std::string manufacturer,
	std::string input,
	int			brightness,
	bool		status,
	bool		connection
)
	: CDevice(id, name, manufacturer, status, connection),
				mInput(input),
				mBrightness(brightness)
{
}

void CProjector::interactionEvent()
{
	// Check if device is active & connected
	if (!getStatus() || !CheckConnection())
	{
		std::cout << "Projector is inactive &/or not connected. Please activate & connect the projector first." << std::endl;
	}
	else
	{
		// Allow the user to set the input source
		std::cout << "Current input: "
			<< mInput
			<< std::endl
			<< "Enter new input source: ";

		// Get user input for new input source
		std::string newSource;
		std::cin >> newSource;

		// Validate the user input
		//if (validateTemperature(newInput))
		//{
		//	// Round to 1dp & update the target temperature
		//	mInput = std::round(newInput * 10.0) / 10.0;
		//	std::cout << "Input source updated successfully." << std::endl;
		//}

		// Allow the user to set the brightness
		std::cout << "Current input: "
			<< mInput
			<< std::endl
			<< "Enter new input source: ";

		// Get user input for new input source
		std::string newSource;
		std::cin >> newSource;

		// Validate the user input
		//if (validateTemperature(newTemp))
		//{
		//	// Round to 1dp & update the target temperature
		//	mTargetTemperature = std::round(newTemp * 10.0) / 10.0;
		//	std::cout << "Target temperature updated successfully." << std::endl;
		//}

	}
}

void CProjector::viewInfo()
{
	CDevice::viewInfo(); // Call base class to display common device information

	std::cout << "Camera Quality: " << mCameraQuality << std::endl;
	std::cout << "Power Source: " << mPowerSource << std::endl;
}
