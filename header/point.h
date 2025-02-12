#pragma once

#include "shape.h";


class Point : public Shape {
public:
	Point(char symbol, int x, int y) : Shape(symbol, x, y) {};
	std::string load() override;
};