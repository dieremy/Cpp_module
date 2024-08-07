//
// Created by test on 8/7/24.
//

#ifndef CPP_MODULE_EASYFIND_TPP
#define CPP_MODULE_EASYFIND_TPP

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

#endif //CPP_MODULE_EASYFIND_TPP
