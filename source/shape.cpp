#include "../header/shape.h";

#include <iostream>
#include <sstream>

using std::cout;
using std::string;
using std::ostringstream;

void Shape::render() {
	cout << load();
}

void Shape::setSymbol(char symbol) {
	this->symbol = symbol;
}

void Shape::setPos(int x, int y) {
	this->x = x;
	this->y = y;
}