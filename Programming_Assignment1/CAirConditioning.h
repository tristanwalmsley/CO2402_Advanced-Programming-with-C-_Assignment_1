#pragma once

#include <iostream>
#include "CDevice.h"

class CAirConditioning : public CDevice
{
private:
	double mTargetTemperature;

public:
	CAirConditioning(int id, std::string name, std::string manufacturer, double temp, bool status = false, bool connection = false);

	void interactionEvent() override;
	void viewInfo() override;

	bool validateTemperature(double temp);
};

