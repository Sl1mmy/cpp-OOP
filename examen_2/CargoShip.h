#pragma once

#include "SpaceVehicle.h"

class CargoShip : SpaceVehicle {
public:
	CargoShip(std::string modelName, int fabricationYear, int originalSpeed, int loadCapacity)
		: SpaceVehicle(modelName, fabricationYear, originalSpeed), loadCapacity(loadCapacity), currentLoad(0) {};

	int GetCurrentSpeed() override;
	void LogInfos() override;
	void LoadCargo(int loadSize);
	void UnloadCargo();

	void AssignMission(int missionDistance);
private:
	int loadCapacity;
	int currentLoad;
};