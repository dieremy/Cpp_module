#include "Rpn.hpp"

int main(int argc, char *argv[]) {
	if (argc < 2) {
		std::cerr << "Usage: " << argv[0] << " <RPN expression>" << std::endl;
		return 1;
	}

	RPN rpn;
	try {
		int result;

		if (argc == 2) result = rpn.getReversePolishNotation(argv[1]);
		else result = rpn.getReversePolishNotation(rpn.getExpression(argv));

		std::cout << result << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Error: Bad input." << std::endl;
		return 1;
	}

	return 0;
}