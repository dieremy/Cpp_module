//
// Created by test on 8/6/24.
//

#ifndef CPP_MODULE_ITER_HPP
#define CPP_MODULE_ITER_HPP

#include <iostream>

template<typename T>
void iter(T *array, size_t length, void (*f)(const T &)) {
	for (size_t i = 0; i < length; i++) {
		(*f)(array[i]);
	}
}

template<typename T>
void print_template(const T &temple) {
	std::cout << temple << std::endl;
}

void print_string(const std::string &s) {
	std::cout << s << std::endl;
}

void print_float(const float &f) {
	std::cout << f << std::endl;
}

#endif //CPP_MODULE_ITER_HPP
