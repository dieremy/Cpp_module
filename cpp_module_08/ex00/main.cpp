//
// Created by test on 8/7/24.
//

#include "Easyfind.tpp"

int main() {
	int array[] = {1, 2, 3, 4, 5};

	std::vector<int> sdesdo(array, array + sizeof(array) / sizeof(int));
	for (size_t i = 0; i < sdesdo.size(); i++) {
		std::cout << sdesdo[i] << std::endl;
	}
	std::cout << std::endl;

	easyfind(sdesdo, 2);
	easyfind(sdesdo, 77);
}