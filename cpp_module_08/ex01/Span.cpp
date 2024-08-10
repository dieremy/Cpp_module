#include "Span.hpp"

void Span::addNumber(int num) {
	if (this->vector.size() >= this->getSize()) {
		throw VectorException();
	}
	this->vector.push_back(num);
}

uint16_t Span::shortestSpan() {
	if (this->vector.empty())
		throw EmptyVectorException();

	uint16_t shortest = abs(this->vector.at(0) - this->vector.at(1));

	for (std::vector<int>::iterator elem = this->vector.begin() + 1; elem != this->vector.end(); elem++) {
		uint16_t diff = abs(*elem - *std::next(elem));
		if (std::next(elem) != vector.end() && shortest >= diff) shortest = diff;
	}
	return shortest;
}

uint16_t Span::longestSpan() {
	if (this->vector.empty())
		throw EmptyVectorException();

	uint16_t longest = abs(this->vector.at(0) - this->vector.at(1));

	for (std::vector<int>::iterator elem = this->vector.begin() + 1; elem != this->vector.end(); elem++) {
		uint16_t diff = abs(*elem - *std::next(elem));
		if (std::next(elem) != vector.end() && longest <= diff) longest = diff;
	}
	return longest;
}

uint16_t Span::getSize() { return this->size; }

void Span::setVector(const std::vector<int> oldVec) {
	this->vector.erase(this->vector.begin(), this->vector.end());

	for (std::vector<int>::const_iterator it = oldVec.begin(); it != oldVec.end(); it++) {
		this->vector.push_back(*it);
	}
}

std::vector<int> Span::getVector() { return this->vector; }

Span::Span(int len) : size(len) {}

Span::Span() : size(0) {}

Span::~Span() {}