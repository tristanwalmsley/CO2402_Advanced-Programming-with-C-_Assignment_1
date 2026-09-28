#pragma once

#include <iostream>
#include "CDeviceFactory.h"

class CProjectorFactory : public CDeviceFactory
{
public:
	CDevice* createProjector(
		int			id,
		std::string name,
		std::string manufacturer,
		std::string input,
		int			brightness,
		bool		status = false,
		bool		connection = false
	);

};
