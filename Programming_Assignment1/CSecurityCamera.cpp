#include <iostream>
#include "CSecurityCamera.h"

CSecurityCamera::CSecurityCamera(
	int			id, 
	std::string name,
	std::string manufacturer,
	std::string quality,
	std::string source,
	bool		status, 
	bool		connection
)
	: CDevice(id, name, manufacturer, status, connection), 
				mCameraQuality(quality), 
				mPowerSource(source)
{
}

void CSecurityCamera::interactionEvent()
{
	// Check if device is active & connected
	if (!getStatus() || !CheckConnection())
	{
		std::cout << "Camera is inactive &/or not connected. Please activate & connect the camera first." << std::endl;
	}
	else
	{
		std::cout << "now viewing camera: " << getDeviceName() << std::endl;
	}
}

void CSecurityCamera::viewInfo()
{
	CDevice::viewInfo(); // Call base class to display common device information

	std::cout << "Camera Quality: " << mCameraQuality << std::endl;
	std::cout << "Power Source: " << mPowerSource << std::endl;
}
