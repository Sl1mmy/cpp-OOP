#include "terrain.h"
#include <iostream>
#include <iomanip>

Terrain::Terrain(int width, int length) {
	this->width = width;
	this->length = length;

	this->pricePerM2 = 36;
}

int Terrain::getPerimeter() {
	return 2 * (length + width);
}

int Terrain::getArea() {
	return length * width;
}

bool Terrain::isSquare() {
	return length == width;
}

float Terrain::getPrice() {
	float price = pricePerM2 * getArea();
	if (isSquare()) { price *= 0.9f; }

	return price;
}

void Terrain::printInfos() {
	std::cout << "Width: " << width << 'm' << " | Length: " << length << 'm' << " | Price: " << getPrice() << "$\n";
}