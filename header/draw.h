#pragma once

#include <string>

class Draw {
public:
	Draw(char character);
	void gotoxy(int x, int y);
	void drawPoint(int x, int y);
	void drawRectangle(int x, int y, int width, int height);

	std::string loadPoint(int x, int y);
	std::string loadRectangle(int x, int y, int width, int height);
private:
	char character;
};