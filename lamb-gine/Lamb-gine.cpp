#include <iostream>
#include "Math.h"

int main() {
	std::cout << "Hello CMake." << std::endl;
	std::cout << Math::cos(Math::piOverFour) << std::endl;
	return 0;
}
