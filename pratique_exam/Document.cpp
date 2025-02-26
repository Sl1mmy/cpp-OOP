
#include "Document.h";


void Document::Borrow() {
	isBorrowed = true;
}

void Document::ReturnDocument() {
	isBorrowed = false;
}

bool Document::isAvailable() {
	return !isBorrowed;
}

std::string Document::GetReferenceNumber() {
	return referenceNumber;
}
