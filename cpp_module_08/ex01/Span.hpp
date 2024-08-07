//
// Created by test on 8/7/24.
//

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span {
private:
	uint8_t size;
	std::vector<int> array;

public:
	uint8_t getSize();

	void addNumber(int num);

	int shortestSpan();

	int longestSpan();

	Span(int len);

	Span();

	~Span();

	class ArrayException : std::exception {
	public:
		const char *what() const throw() {
			return ("Array is full.");
		}
	};
};

#endif //SPAN_HPP
