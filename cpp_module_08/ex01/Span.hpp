//
// Created by test on 8/7/24.
//

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <cstdlib>
# include <numeric>
# include <algorithm>


class Span {
private:
	uint16_t size;
	std::vector<int> vector;

public:
	uint16_t getSize();

	void setVector(std::vector<int> vec);

	std::vector<int> getVector();

	void addNumber(int num);

	uint16_t shortestSpan();

	uint16_t longestSpan();

	Span(int len);

	Span();

	~Span();

	class VectorException : std::exception {
	public:
		const char *what() const throw() {
			return ("Vector is full.");
		}
	};

	class EmptyVectorException : std::exception {
	public:
		const char *what() const throw() {
			return ("Vector is empty.");
		}
	};
};

#endif //SPAN_HPP
