//
// Created by test on 8/15/24.
//

#ifndef CPP_MODULE_PMERGEME_HPP
#define CPP_MODULE_PMERGEME_HPP

#include <iostream>
#include <list>
#include <deque>
#include <tuple>
#include <exception>
#include <sys/time.h>
#include <climits>
#include <algorithm>


class PmergeMe {
private:
	std::list<int> _list;
	std::deque<int> _deque;
	char **_argv;
public:
	PmergeMe(char **argv) {
		this->_argv = argv;
	}

	PmergeMe() {};

	~PmergeMe() {};

	void parseInput();

	void mergeInsertionSortList();

	void mergeInsertionSortDeque();

	void printList(const std::string &prefix);

	void printDeque(const std::string &prefix);
};

class InvalidInputError : public std::exception {
public:
	const char *what() const throw() {
		return "Error";
	}
};

#endif //CPP_MODULE_PMERGEME_HPP
