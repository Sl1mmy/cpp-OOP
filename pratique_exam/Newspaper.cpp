#include "Newspaper.h"
#include <iostream>

void Newspaper::DisplayInfo() {
	std::cout << "Title: " << title << " | Reference : " << referenceNumber << " | status : " << (isBorrowed ? "borrowed" : "available") << " | Date : "<< year << ":" << month << ":" << day << '\n';
}