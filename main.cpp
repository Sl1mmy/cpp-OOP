#include "utilities.h"
#include "terrain.h"
#include "draw.h"

#include <iomanip>
#include <conio.h>

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


	_getch();
	return 0;
}