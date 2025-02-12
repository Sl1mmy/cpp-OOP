#pragma once

#include <string>

class Shape {

public:
	Shape(char symbol, int x, int y) : symbol(symbol), x(x), y(y) {};

	virtual std::string load() = 0;
	void render();
	void setSymbol(char symbol);
	void setPos(int x, int y);
protected:
	char symbol;
	int x;
	int y;
};