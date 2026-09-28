#include <iostream>
#include "CDevice.h"

// Default Constructor
CDevice::CDevice()
{
	mUniqueID = 0;
	mDeviceName = "";
	mManufacturer = "";
	mStatus = false;
	mConnection = false;
}

// Constructor with parameters
CDevice::CDevice(int id, std::string name, std::string manufacturer, bool status, bool connection)
{
	mUniqueID = id;
	mDeviceName = name;
	mManufacturer = manufacturer;
	mStatus = status;
	mConnection = connection;
}

// Device control methods
void CDevice::Activate()
{
	mStatus = true;
	std::cout << mDeviceName << " activated." << std::endl;
}

void CDevice::Deactivate()
{
	mStatus = false;
	std::cout << mDeviceName << " deactivated." << std::endl;
}

bool CDevice::CheckConnection()
{
	return mConnection;
}

void CDevice::viewInfo()
{
	std::cout << "Device ID: " << mUniqueID << std::endl;
	std::cout << "Device Name: " << mDeviceName << std::endl;
	std::cout << "Manufacturer: " << mManufacturer << std::endl;
	std::cout << "Status: " << (mStatus ? "Active" : "Inactive") << std::endl;
	std::cout << "Connection: " << (mConnection ? "Connected" : "Disconnected") << std::endl;
}