#include "Serializer.hpp"

static void initValues(Data &d) {
	std::cout << "Init values:" << std::endl;
	d.s1 = "sdesdo";
	d.s2 = "SDESDO";
	d.i = 123;
}

static void printValues(Data &d) {
	std::cout << "1: " << d.s1 << std::endl;
	std::cout << "2: " << d.s2 << std::endl;
	std::cout << "3: " << d.i << std::endl;
}

int main(void) {
	Data var_one;
	Data *var_two;
	Data *var_three;

	uintptr_t serializer;

	initValues(var_one);
	printValues(var_one);

	var_two = &var_one;
	printValues(*var_two);
	serializer = Serializer().serialize(var_two);

	var_three = Serializer().deserialize(serializer);
	printValues(*var_two);
	printValues(*var_three);

	std::cout << "addresses:\n" << var_two << " <============> " << var_three << std::endl;
	return (0);
}