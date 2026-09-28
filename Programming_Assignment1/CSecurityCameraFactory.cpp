#include "CSecurityCamera.h"
#include "CSecurityCameraFactory.h"
#include <memory>

// Create a SecurityCamera object & return a ptr to it
CDevice* CSecurityCameraFactory::createSecurityCamera(
	int			id,
	std::string name,
	std::string manufacturer,
	std::string quality,
	std::string source,
	bool		status,
	bool		connection
)
{
	std::unique_ptr<CSecurityCamera> camera = std::make_unique<CSecurityCamera>(
		id,
		name,
		manufacturer,
		quality,
		source,
		status,
		connection
	);

	return camera.release();
}
