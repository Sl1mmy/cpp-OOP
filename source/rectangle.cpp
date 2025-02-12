#include "../header/rectangle.h"

#include <sstream>

std::string Rectangle::load() {
	std::ostringstream output;

	output << std::string(y, '\n');
	output << std::string(x, ' ');
	output << std::string(width, symbol);
	output << '\n';

	for (int i = 0; i < height - 2; i++)
	{
		output << std::string(x, ' ');
		output << symbol;
		output << std::string(width - 2, ' ');
		output << symbol;
		output << '\n';
	}

	if (height > 1)
	{
		output << std::string(x, ' ');
		output << std::string(width, symbol);
		output << '\n';
	}

	return output.str();
}