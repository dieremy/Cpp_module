#include "Span.hpp"

int main() {
	Span sp = Span(5);
	try {
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch (const Span::VectorException &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const Span::EmptyVectorException &e) {
		std::cerr << e.what() << std::endl;
	}

	sp = Span(10000);
	std::vector<int> vec;
	for (int i = 1; i < 10000; i++)
		vec.push_back(i);
	vec.push_back(20000);

	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const Span::EmptyVectorException &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		sp.setVector(vec);
		sp.printDebug(1);
	} catch (const Span::VectorException &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const Span::EmptyVectorException &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
