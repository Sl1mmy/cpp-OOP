#pragma once

#include "Document.h";

class Book : public Document {
public:
	Book(std::string title, std::string referenceNumber, bool isBorrowed, std::string author, int pageCount) 
		: Document(title, referenceNumber, isBorrowed), author(author), pageCount(pageCount) {};

	void DisplayInfo() override;

private:
	std::string author;
	int pageCount;
};