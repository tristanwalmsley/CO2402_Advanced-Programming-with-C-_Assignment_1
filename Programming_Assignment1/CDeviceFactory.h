#pragma once

// Include necessary headers
#include <iostream>

// Forward declarations
class CDevice;

// Abstract Factory class for creating devices
class CDeviceFactory
{
public:
	virtual ~CDeviceFactory() {};

	// Factory methods for creating specific device types
	virtual CDevice* createSecurityCamera(
		int			id,
		std::string name,
		std::string manufacturer,
		std::string quality,
		std::string source,
		bool		status = false,
		bool		connection = false
	) { return nullptr; }
	virtual CDevice* createAirConditioning(
		int id,
		std::string name,
		std::string manufacturer,
		double		temp,
		bool		status = false,
		bool		connection = false
	) { return nullptr; }
	virtual CDevice* createProjector(
		int id,
		std::string name,
		std::string manufacturer,
		std::string	input,
		int			brightness,
		bool		status = false,
		bool		connection = false
	) {
		return nullptr;
	}
};
