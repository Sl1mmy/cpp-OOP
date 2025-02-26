#pragma once

#include "Document.h"

class Magazine : public Document {

public:
	Magazine(std::string title, std::string referenceNumber, bool isBorrowed, int editionNumber)
		: Document(title, referenceNumber, isBorrowed), editionNumber(editionNumber) {};

	void DisplayInfo() override;

private:
	int editionNumber;
};