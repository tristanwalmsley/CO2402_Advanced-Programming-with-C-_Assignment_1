#include "CAirConditioning.h"
#include "CAirConditioningFactory.h"
#include <memory>

// Create a AirConditioning object & return a ptr to it
CDevice* CAirConditioningFactory::createAirConditioning(
	int			id,
	std::string name,
	std::string manufacturer,
	double		temp,
	bool		status,
	bool		connection
)
{
	std::unique_ptr<CAirConditioning> aircon = std::make_unique<CAirConditioning>(
		id,
		name,
		manufacturer,
		temp,
		status,
		connection
	);

	return aircon.release();
}
