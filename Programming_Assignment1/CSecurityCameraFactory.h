#pragma once

#include <iostream>
#include "CDeviceFactory.h"

class CSecurityCameraFactory : public CDeviceFactory
{
public:
	CDevice* createSecurityCamera( 
		int			id,
		std::string name,
		std::string manufacturer,
		std::string quality,
		std::string source,
		bool		status = false, 
		bool		connection = false
	);

};
