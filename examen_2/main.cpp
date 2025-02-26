#include "CargoShip.h"
#include "ExplorerShip.h"

#include <iostream>

int main() {
	CargoShip cargo("Cargo1", 3000, 50, 30);

	ExplorerShip explorer1("Explorer1", 3010, 100);
	ExplorerShip explorer2("Explorer2", 3015, 120);

	bool running = true;

	while (running) {
		std::cout << " ---------- Ship Manager ---------- \n";
		std::cout << "1. Afficher info\n";
		std::cout << "2. Charger une cargaison\n";
		std::cout << "3. Decharger une cargaison\n";
		std::cout << "4. Envoyer le cargo en mission\n";
		std::cout << "5. Assigner une mission au Explorer1\n";
		std::cout << "6. Assigner une mission au Explorer2\n";
		std::cout << "7. Quitter\n";


		int choice;
		std::cin >> choice;
		std::cin.ignore();

		switch (choice)
		{
		case 1: {
			cargo.LogInfos();
			explorer1.LogInfos();
			explorer2.LogInfos();
			std::cout << '\n';
			break;
		}
		case 2: {
			int weight;
			std::cout << "Entrez un poid: ";
			std::cin >> weight;
			std::cin.ignore();
			cargo.LoadCargo(weight);
			break;
		}
		case 3: {
			cargo.UnloadCargo();
			break;
		}
		case 4: {
			int distance;
			std::cout << "Entrez une distance: ";
			std::cin >> distance;
			//cargo.SendToMission(distance); // forgot
			cargo.AssignMission(distance);
			break;
		}
		case 5: {
			std::string missionName;
			int distance;
			std::cout << "Entrer le nom de la mission: ";
			std::cin >> missionName;
			std::cout << "Entrez la distance: ";
			std::cin >> distance;
			explorer1.AssignMission(missionName, distance);
			break;
		}
		case 6: {
			std::string missionName;
			int distance;
			std::cout << "Entrer le nom de la mission: ";
			std::cin >> missionName;
			std::cout << "Entrez la distance: ";
			std::cin >> distance;
			explorer2.AssignMission(missionName, distance);
			break;
		} 
		case 7: {
			std::cout << "Fin du programme";
			running = false;
			break;
		}
		default:
			std::cout << "Reessayez.";
			break;
		}
	}

	return 0;
}