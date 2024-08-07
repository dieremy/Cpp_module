#include "Span.hpp"

void Span::addNumber(int num) {
	if (this->array.size() >= this->getSize()) {
		throw ArrayException();
	}
	this->array.push_back(num);
}

int Span::shortestSpan() {
	int shortest = -1;

	for (std::vector<int>::iterator elem = this->array.begin(); elem != this->array.end(); elem++) {
		if (shortest <= (*elem - (*elem + 1))) {
			shortest = *elem - (*elem + 1);
		}
	}
	return shortest;
}

int Span::longestSpan() {
	int longest = -1;

	for (std::vector<int>::iterator elem = this->array.begin(); elem != this->array.end(); elem++) {
		if (longest >= (*elem - (*elem + 1))) {
			longest = *elem - (*elem + 1);
		}
	}
	return longest;
}

uint8_t Span::getSize() { return this->size; }

Span::Span(int len) : size(len) {}

Span::Span() : size(0) {}

Span::~Span() {}