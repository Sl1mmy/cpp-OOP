#include "ExplorerShip.h"

#include <iostream>

int ExplorerShip::GetCurrentSpeed() {
	return (originalSpeed * (1 - (0.015 * (3025 - fabricationYear)
		+ 0.001 * (kmAge / static_cast<double>(10000)))));
}

void ExplorerShip::LogInfos() {
	std::cout << " Name: " << modelName
		<< " | Annee de fabrication : " << fabricationYear
		<< " | Vitesse d'origine : " << originalSpeed
		<< " | Vitesse actuelle : " << GetCurrentSpeed()
		<< " | Kilometrage : " << kmAge
		<< " | Mission : " << (missionName == "" ? " pas de mission" : missionName)
		<< '\n';
}

void ExplorerShip::AssignMission(std::string mission, int missionDistance) {
	missionName = mission;
	SendToMission(missionDistance);
}

