#pragma once

#include "SpaceVehicle.h"
#include <string>

class ExplorerShip : SpaceVehicle {
public:
	ExplorerShip(std::string modelName, int fabricationYear, int originalSpeed)
		: SpaceVehicle(modelName, fabricationYear, originalSpeed), missionName("") {};

	int GetCurrentSpeed() override;
	void LogInfos() override;
	void AssignMission(std::string mission, int missionDistance);

private:
	std::string missionName;
};