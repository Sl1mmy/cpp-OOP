#pragma once

#include "shape.h";


class Rectangle : public Shape {
public:
	Rectangle(char symbol, int x, int y, int width, int height) : Shape(symbol, x, y), width(width), height(height) {};
	std::string load() override;
protected:
	int width;
	int height;
};