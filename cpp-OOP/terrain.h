#pragma once

class Terrain {
public:
	Terrain(int width, int length);
	int getPerimeter();
	int getArea();
	float getPrice();
	bool isSquare();
	void printInfos();

private:
	int width;
	int length;
	int pricePerM2;

};