#pragma once

#include <string>

class SpaceVehicle
{
public:
	SpaceVehicle(std::string modelName, int fabricationYear, int originalSpeed)
		: modelName(modelName), fabricationYear(fabricationYear), originalSpeed(originalSpeed), kmAge(0) {};

	int virtual GetCurrentSpeed() = 0;
	void virtual LogInfos() = 0;

	void SendToMission(int missionDistance);

protected:
	std::string modelName;
	int fabricationYear;
	int originalSpeed;
	int kmAge;
};