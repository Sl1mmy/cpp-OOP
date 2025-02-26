#include "Magazine.h"

#include <iostream>

void Magazine::DisplayInfo() {
	std::cout << "Title: " << title << " | Reference : " << referenceNumber << " | status : " << (isBorrowed ? "borrowed" : "available") << " | Edition : " << editionNumber << '\n';
}