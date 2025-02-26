#include "Library.h"
#include "Book.h"
#include "Magazine.h"
#include "Newspaper.h"

#include <iostream>
#include <string>
#include <limits>

int main() {
	Library library;
	bool running = true;

	while (running)
	{
		std::cout << "\n--- Menu de la Bibliothèque ---\n";
        std::cout << "1. Ajouter un Document\n";
        std::cout << "2. Afficher les Documents\n";
        std::cout << "3. Retirer un Document\n";
        std::cout << "4. Emprunter / Retourner un Document\n";
        std::cout << "5. Quitter\n";
        std::cout << "Entrez votre choix: ";

		int choice;
		std::cin >> choice;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		switch (choice)
		{
		case 1: {
			std::cout << "Type de document? (1 = Livre, 2 = Magazine, 3 = Journal): ";
			int docType;
			std::cin >> docType;
			std::cin.ignore();

			std::string referenceNumber, title;
			std::cout << "Numero de reference : ";
			std::getline(std::cin, referenceNumber);
			std::cout << "Titre : ";
			std::getline(std::cin, title);

			std::shared_ptr<Document> newDoc;
			if (docType == 1) { // Livre
				std::string author;
				int pageCount;

				std::cout << "Autheur : ";
				std::getline(std::cin, author);
				std::cout << "Page Count : ";
				std::cin >> pageCount;
				std::cin.ignore();

				newDoc = std::make_shared<Book>(title, referenceNumber, false, author, pageCount);
			}
			else if (docType == 2) { // Magazine
				int editionNumber;

				std::cout << "Edition : ";
				std::cin >> editionNumber;
				std::cin.ignore();

				newDoc = std::make_shared<Magazine>(title, referenceNumber, false, editionNumber);
			}
			else if (docType == 3) { // Journal
				int year, month, day;

				//could validate
				std::cout << "Date (Annee, Mois, Jour) : ";
				std::cin >> year >> month >> day;

				newDoc = std::make_shared<Newspaper>(title, referenceNumber, false, year, month, day);
			}
			else {
				std::cout << "document invalide \n";
				break;
			}

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			library.AddDocument(newDoc);
			std::cout << "Document added \n";
			break;
		}
		case 2: {
			std::cout << "\n --- Liste des documents ---\n";
			library.DisplayDocument();
			break;
		}
		case 3: {
			std::cout << "entrez le numero de reference du document a retirer : ";
			std::string referenceNumber;
			std::getline(std::cin, referenceNumber);
			library.RemoveDocument(referenceNumber);
			std::cout << "document removed if found";
			break;
		}
		case 4: {
			std::cout << "entrez le numero de reference du document : ";
			std::string referenceNumber;
			std::getline(std::cin, referenceNumber);
			
			std::shared_ptr<Document> doc = library.GetDocument(referenceNumber);

			if (doc->isAvailable()) {
				doc->Borrow();
				std::cout << "Document borrowed";
				break;
			}
			else {
				doc->ReturnDocument();
				std::cout << "Document returned";
				break;
			}

			throw std::runtime_error("Document not found");
		}
		case 5: {
			std::cout << "Merci\n";
			running = false;
			break;
		}
		default:
			std::cout << "Choix invalide. \n";
			break;
		}
	};

	return 0;
}