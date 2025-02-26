#pragma once

#include <string>

class Document {
public:
	Document(std::string title, std::string referenceNumber, bool isBorrowed) 
		: title(title), referenceNumber(referenceNumber), isBorrowed(false) {};

	virtual void DisplayInfo() = 0;
	void Borrow();
	void ReturnDocument();
	bool isAvailable();
	std::string GetReferenceNumber();
protected:
	std::string title;
	std::string referenceNumber;
	bool isBorrowed;
};