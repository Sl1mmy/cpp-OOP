#include "header/utilities.h"
#include "header/terrain.h"
#include "header/draw.h"

#include <iostream>

using std::cin;

int main() {
	
	//getName();
	//getAge();

	/*
	Terrain terrain(10, 10);
	terrain.printInfos();

	Terrain terrain2(5, 10);
	terrain2.printInfos();
	*/

	Draw draw('#');


	draw.drawPoint(10, 10);

	draw.drawRectangle(11, 11, 10, 5);


	cin.get(); // to keep console open
	return 0;
}