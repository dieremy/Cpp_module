//
// Created by test on 8/15/24.
//

#include "Rpn.hpp"

std::string RPN::getExpression(char **args) {
	std::string result;
	char **arg = args + 1;

	while (*arg) {
		result += *arg;
		result += " ";
		arg++;
	}

	if (!result.empty()) result.erase(result.length() - 1);
	return result;
}

int RPN::getResult(const std::string &operation) {
	if (operation == "+") return this->_next + this->_node;
	else if (operation == "-") return this->_next - this->_node;
	else if (operation == "*") return this->_next * this->_node;
	else if (operation == "/") return this->_next / this->_node;

	return -1;
}

int RPN::getReversePolishNotation(const std::string &expression) {
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token) this->_tokens.push_back(token);

	for (size_t i = 0; i < this->_tokens.size(); i++) {
		if (this->_tokens[i] == "+" || this->_tokens[i] == "-" || this->_tokens[i] == "*" || this->_tokens[i] == "/") {
			this->_node = this->_integers.top();
			this->_integers.pop();
			this->_next = this->_integers.top();
			this->_integers.pop();

			this->_integers.push(getResult(this->_tokens[i]));
		} else {
			try {
				this->_integers.push(std::stoi(this->_tokens[i]));
			} catch (std::exception &e) {
				throw std::exception();
			}
		}
	}
	return (this->_integers.top());
}