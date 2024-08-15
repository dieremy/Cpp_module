//
// Created by test on 8/15/24.
//

#ifndef CPP_MODULE_RPN_HPP
#define CPP_MODULE_RPN_HPP

#include <sstream>
#include <vector>
#include <string>
#include <ostream>
#include <iostream>
#include <stack>

class RPN {
private:
	std::vector <std::string> _tokens;
	std::stack<int> _integers;
	int _node;
	int _next;
public:
	RPN() {};

	~RPN() {};

	int getReversePolishNotation(const std::string &expression);

	std::string getExpression(char **args);

	int getResult(const std::string &operation);

};


#endif //CPP_MODULE_RPN_HPP
