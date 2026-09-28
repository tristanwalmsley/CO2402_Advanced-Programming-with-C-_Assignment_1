#pragma once

#include <iostream>
#include "CDevice.h"

class CSecurityCamera : public CDevice
{
private:
	std::string mCameraQuality;
	std::string mPowerSource;

public:
	CSecurityCamera(
		int			id,
		std::string name,
		std::string manufacturer,
		std::string quality,
		std::string source,
		bool		status = false,
		bool		connection = false
	);

	void interactionEvent() override;
	void viewInfo() override;
};
