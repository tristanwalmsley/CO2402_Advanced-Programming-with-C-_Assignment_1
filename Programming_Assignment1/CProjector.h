#pragma once

#include <iostream>
#include "CDevice.h"

class CProjector : public CDevice
{
private:
	std::string mInput;
	int			mBrightness;

public:
	CProjector(
		int			id,
		std::string name,
		std::string manufacturer,
		std::string input,
		int			brightness,
		bool		status = false,
		bool		connection = false
	);

	void interactionEvent() override;
	void viewInfo() override;
};
