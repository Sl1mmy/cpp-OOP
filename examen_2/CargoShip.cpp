#include "CargoShip.h"

#include <iostream>

int CargoShip::GetCurrentSpeed() {
	return (originalSpeed * (1 - (0.02 * (3025 - fabricationYear)
		+ 0.005 * (kmAge / static_cast<double>(10000)) + 0.0015 * (currentLoad / static_cast<double>(100)))));
}

void CargoShip::LogInfos() {
	std::cout << " Name: " << modelName
		<< " | Annee de fabrication : " << fabricationYear
		<< " | Vitesse d'origine : " << originalSpeed
		<< " | Vitesse actuelle : " << GetCurrentSpeed()
		<< " | Kilometrage : " << kmAge
		<< " | Capacite de cargo : " << loadCapacity
		<< " | cargo actuel : " << currentLoad
		<< '\n';
}

void CargoShip::LoadCargo(int loadSize) {
	if (currentLoad + loadSize <= loadCapacity) {
		currentLoad += loadSize;
	}
	else {
		currentLoad = loadCapacity;
	}
}

void CargoShip::UnloadCargo() {
	currentLoad = 0;
}

void CargoShip::AssignMission(int missionDistance) {
	SendToMission(missionDistance);
}