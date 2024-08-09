#include "Span.hpp"
#include <stdio.h>
#include <cstdlib>

void Span::addNumber(int num) {
	if (this->array.size() >= this->getSize()) {
		throw ArrayException();
	}
	this->array.push_back(num);
}

int Span::shortestSpan() {
	if (this->array.empty())
		throw EmptyArrayException();

	int shortest = abs(this->array.at(0) - this->array.at(1));

	for (std::vector<int>::iterator elem = this->array.begin() + 1; elem != this->array.end(); elem++) {
		uint8_t diff = abs(*elem - *std::next(elem));
		if (std::next(elem) != array.end() && shortest >= diff) {
			shortest = diff;
		}
	}
	return shortest;
}

int Span::longestSpan() {
	if (this->array.empty())
		throw EmptyArrayException();

	int longest = abs(this->array.at(0) - this->array.at(1));

	for (std::vector<int>::iterator elem = this->array.begin() + 1; elem != this->array.end(); elem++) {
		uint8_t diff = abs(*elem - *std::next(elem));
		if (std::next(elem) != array.end() && longest <= diff) {
			longest = diff;
		}
	}
	return longest;
}

uint8_t Span::getSize() { return this->size; }

Span::Span(int len) : size(len) {}

Span::Span() : size(0) {}

Span::~Span() {}