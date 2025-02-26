#include "Book.h"
#include <iostream>

void Book::DisplayInfo() {
	std::cout << "Title: " << title << " | Reference : " << referenceNumber << " | status : " << (isBorrowed ? "borrowed" : "available") << " | Author : " << author << " | Page count : " << pageCount << '\n';
}
