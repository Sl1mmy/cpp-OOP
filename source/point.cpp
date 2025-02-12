#include "../header/point.h"

#include <sstream>

std::string Point::load() {
	std::ostringstream output;

	output << std::string(y, '\n');
	output << std::string(x, ' ');

	output << symbol;

	return output.str();
}