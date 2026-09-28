#pragma once

#include <iostream>
#include "CDeviceFactory.h"

class CAirConditioningFactory : public CDeviceFactory
{
	CDevice* createAirConditioning(
		int			id,
		std::string name,
		std::string manufacturer,
		double		temp,
		bool		status = false,
		bool		connection = false
	);
};

