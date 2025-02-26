#include "SpaceVehicle.h"

#include <iostream>

void SpaceVehicle::SendToMission(int missionDistance) {
	std::cout << modelName << " est parti en mission!\n";

	kmAge += missionDistance;
}