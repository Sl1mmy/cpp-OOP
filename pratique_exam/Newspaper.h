#pragma once

#include "Document.h"

class Newspaper : public Document {

public:
	Newspaper(std::string title, std::string referenceNumber, bool isBorrowed, int year, int month, int day)
		: Document(title, referenceNumber, isBorrowed), year(year), month(month), day(day) {};

	void DisplayInfo() override;
private:
	int year;
	int month;
	int day;
};