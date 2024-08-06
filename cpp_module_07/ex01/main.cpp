#include "iter.hpp"

int main() {
	std::string strings[] = {"Sdesdo", "eats", "an", "ice cream"};

	std::cout << "Normal: " << std::endl;
	iter(strings, 4, print_template<std::string>);
	std::cout << std::endl;

	float floats[] = {42.5432, 15.474, 6.8549};

	std::cout << "Floats: " << std::endl;
	iter(floats, 3, print_float);
	std::cout << std::endl;

	char chars[] = {'s', 'd', 'e', 's', 'd', 'o'};
	::iter(chars, 6, print_template<char>);
}