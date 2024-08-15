//
// Created by test on 8/15/24.
//

#include "PmergeMe.hpp"


static int ft_atoi(const char *str) {
	int sign = 1, res = 0;

	while (*str == 32 || (*str >= 9 && *str <= 13)) str++;
	if (*str == '+' || *str == '-') {
		if (*str == '-') sign = -1;
		str++;
	}
	while (*str) {
		if (!std::isdigit(*str)) throw InvalidInputError();
		if (res > INT_MAX / 10 || (res == INT_MAX / 10 && *str - '0' > INT_MAX % 10)) throw InvalidInputError();
		res = res * 10 + (*str++ - '0');
	}
	return (res * sign);
}

PmergeMe::PmergeMe(char **args) {
	this->_args = args;
}

#include <stdio.h>

void PmergeMe::parseInput() {
	try {
		for (size_t i = 1; this->_args[i]; i++) {
			this->_list.push_back(ft_atoi(this->_args[i]));
			this->_deque.push_back(ft_atoi(this->_args[i]));
		}
	} catch (const InvalidInputError &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		std::exit(2);
	}
}

void PmergeMe::mergeInsertionSortList() {
	if (this->_list.size() < 2)
		return;

	std::list<int> tmp_list = this->_list;
	this->_list.clear();

	std::list<int>::iterator it = tmp_list.begin();
	while (it != tmp_list.end()) {
		int first = *it++;
		int second = (it != tmp_list.end()) ? *it++ : first;

		if (first > second)
			std::swap(first, second);

		this->_list.push_back(first);
		if (second != first)
			this->_list.push_back(second);
	}

	this->_list.sort();
}

void PmergeMe::mergeInsertionSortDeque() {
	if (this->_deque.size() < 2)
		return;

	std::deque<int> tmp_deque = this->_deque;
	this->_deque.clear();

	std::deque<int>::iterator it = tmp_deque.begin();
	while (it != tmp_deque.end()) {
		int first = *it++;
		int second = (it != tmp_deque.end()) ? *it++ : first;

		if (first > second)
			std::swap(first, second);

		this->_deque.push_back(first);
		if (second != first)
			this->_deque.push_back(second);
	}

	std::sort(this->_deque.begin(), this->_deque.end());
}

void PmergeMe::printList(const std::string &prefix) {
	std::cout << prefix;
	for (std::list<int>::iterator it = this->_list.begin(); it != this->_list.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::printDeque(const std::string &prefix) {
	std::cout << prefix;
	for (std::deque<int>::iterator it = this->_deque.begin(); it != this->_deque.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}