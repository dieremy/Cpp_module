//
// Created by test on 8/7/24.
//

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

template<typename T>
void easyfind(const T array, int v) {

	for (size_t i = 0; i < array.size(); i++) {
		if (array[i] == v) {
			std::cout << "Found integer: " << v << std::endl;
			return;
		}
	}
	std::cout << "Integer " << v << " not found" << std::endl;
}

#endif //SPAN_HPP
