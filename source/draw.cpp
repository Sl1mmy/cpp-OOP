#include "../header/draw.h"

//#include <Windows.h>
#include <iostream>
#include <sstream>

using std::cout;
using std::string;
using std::ostringstream;


Draw::Draw(char character) {
	this->character = character;
}

void Draw::gotoxy(int x, int y) {
	/* AVEC WINDOWS.H
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
	SetConsoleCursorPosition(hConsole, position);
	*/
	std::cout << "\033[" << y << ";" << x << "H"; // works on linux!
}

void Draw::drawPoint(int x, int y) {
	gotoxy(x, y);
	std::cout << character;
}

void Draw::drawRectangle(int x, int y, int width, int height) {
	gotoxy(x, y);

	std::cout << string(width, character);

	for (int i = 1; i < height - 1; i++) {
		gotoxy(x, y + i);
		cout << character;
		gotoxy(x + width - 1, y + i);
		cout << character;
	}
	
	gotoxy(x, y + height - 1);
	cout << string(width, character);
}