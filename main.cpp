#include "header/utilities.h"
#include "header/terrain.h"
#include "header/draw.h"
#include "header/point.h"
#include "header/rectangle.h"

#include <iostream>


int main() {
	
	//getName();
	//getAge();

	/*
	Terrain terrain(10, 10);
	terrain.printInfos();

	Terrain terrain2(5, 10);
	terrain2.printInfos();
	*/

	/*
	Draw draw('#');

	draw.drawPoint(10, 10);
	draw.drawPoint(13, 13);
	draw.drawRectangle(11, 11, 10, 5);
	*/

	std::unique_ptr<Shape> shape; //espace memoire pour obj shape

	shape = std::make_unique<Point>('X', 5, 5);
	shape->render();

	shape = std::make_unique<Rectangle>('#', 5, 5, 10, 5);
	shape->render();


	std::cin.get(); // to keep console open
	return 0;
}