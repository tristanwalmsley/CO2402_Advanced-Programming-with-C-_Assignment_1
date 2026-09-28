#include <iostream>
#include "CDevice.h"
#include "CDeviceFactory.h"
#include "CSecurityCameraFactory.h"
#include "CSecurityCamera.h"
#include "CAirConditioningFactory.h"
#include "CAirConditioning.h"

#include "memory.h"

using namespace std;

int main()
{
	// Create a security camera factory 
	unique_ptr<CDeviceFactory> securityCameraFactory = make_unique<CSecurityCameraFactory>();

	// Create a SecurityCamera object
	unique_ptr<CDevice> securityCamera1(securityCameraFactory->createSecurityCamera(
		0,
		"Side Camera",
		"ULan",
		"720p",
		"Mains Power"
	));

	// Interact with the security camera
	securityCamera1->interactionEvent();
	securityCamera1->Activate();
	securityCamera1->setConnection(true);
	securityCamera1->interactionEvent();
	securityCamera1->viewInfo();

	// Create an air conditioning factory
	unique_ptr<CDeviceFactory> airConditioningFactory = make_unique<CAirConditioningFactory>();

	// Create an AirConditioning object
	unique_ptr<CDevice> airConditioning1(airConditioningFactory->createAirConditioning(
		1,
		"Reception AC",
		"ULan",
		24.5
	));

	// Interact with the air con
	airConditioning1->interactionEvent();

	airConditioning1->Activate();
	airConditioning1->setConnection(true);
	airConditioning1->interactionEvent();
	airConditioning1->interactionEvent();
	airConditioning1->viewInfo();
}