#include "ScalarConverter.hpp"


static bool isDigitString(const std::string &str) {
	std::stringstream ss(str);
	int num;

	if (ss >> num && ss.eof()) return true;
	return false;
}

int ScalarConverter::compareInput(std::string arg = "default") const {
	if (arg == "decimals" && this->_input[0] == 'n' && this->_input[1] == 'a' && this->_input[2] == 'n' &&
		this->_input[3] == 0)
		return 2;

	return ((this->_input[0] == 'n' && this->_input[1] == 'a' && this->_input[2] == 'n' && this->_input[3] == 0) ||
//			(this->_input[0] == 'n' && this->_input[1] == 'a' && this->_input[2] == 'n' && this->_input[3] == 'f' &&
//			 this->_input[4] == 0) ||
			(this->_input[0] == 'i' && this->_input[1] == 'n' && this->_input[2] == 'f' && this->_input[3] == 0) ||
			(this->_input[0] == '+' && this->_input[1] == 'i' && this->_input[2] == 'n' && this->_input[3] == 'f' &&
			 this->_input[4] == 0) ||
			(this->_input[0] == '-' && this->_input[1] == 'i' && this->_input[2] == 'n' && this->_input[3] == 'f' &&
			 this->_input[4] == 0)) ? 0 : 1;
}

std::string ScalarConverter::sanitizeDecimals(std::string nan, std::string last) const {
	int check = this->compareInput("decimals");
	size_t pos = this->_input.find('.');

	if (pos != std::string::npos) {
		if (this->_input.at(this->_input.length() - 1) == '.') {
			return this->_input.substr(0, this->_input.find_first_of('.')) + last;
		} else if (last[0] == '.' && last[1] == '0' && last[2] == 'f' && std::isdigit(this->_input.at(this->_input.find('.')))) {
			return this->_input.substr(0, this->_input.find_first_of('.') + 2) + "f";
		} else if (last[0] == '.' && last[1] == '0' && last[2] == 'f' && !std::isdigit(this->_input.at(this->_input.find('.')))) {
			return this->_input.substr(0, this->_input.find_first_of('.') + 1) + "0f";
		} else if (std::isdigit(this->_input.at(this->_input.find('.')))) {
			return this->_input.substr(0, this->_input.find_first_of('.') + 2);
		} else if (!std::isdigit(this->_input.at(this->_input.find('.')))) {
			return this->_input.substr(0, this->_input.find_first_of('.') + 1) + "0";
		}
	}

	switch (check) {
		case 0:
			if (last[0] == '.' && last[1] == '0' && last[2] == 'f')
				return this->_input + "f";
			return this->_input;
		case 1:
			if (isDigitString(this->_input)) {
				return this->_input + last;
			} else if (!isDigitString(this->_input) && this->_input.length() == 1) {
				return std::to_string(static_cast<int>(*this->_input.c_str())) + last;
			} else {
				return "impossible";
			}
		case 2:
			return nan;
		default:
			break;
	}

	return "error";
}

std::string ScalarConverter::converterChar() const {
	if (this->compareInput() == 0)
		return "impossible";

	std::string temp = this->_input.substr(0, this->_input.find_first_of('.'));

	if (temp.length() == 1 && !isDigitString(temp)) {
		return '\'' + temp + '\'';
	} else if (temp.length() > 1 && !isDigitString(temp)) {
		return "impossible";
	}

	int check = std::atoi(temp.c_str());
	if (check < 0)
		return "impossible";
	else if (check >= 32 && check <= 126) {
		char s[4] = {'\'', static_cast<char>(check), '\'', '\0'};
		return (s);
	} else {
		return ("Non displayable");
	}
}

std::string ScalarConverter::converterInt(void) const {
	if (this->compareInput() == 0)
		return ("impossible");

	std::string temp = this->_input.substr(0, this->_input.find_first_of('.'));
	if (temp[0] == '-' && temp[1] == '0')
		temp.erase(temp.begin() + 0);

	if (temp.length() == 1 && std::isalpha(*temp.c_str())) {
		return std::to_string(static_cast<int>(*temp.c_str()));
	} else if (!isDigitString(this->_input) && this->_input.length() == 1) {
		return std::to_string(static_cast<int>(*this->_input.c_str()));
	} else if (temp.length() > 1 && !isDigitString(temp)) {
		return "impossible";
	}

//	printf("diocane\n");
	return temp;
}

std::string ScalarConverter::converterFloat(void) const { return this->sanitizeDecimals("nanf", ".0f"); }

std::string ScalarConverter::converterDouble(void) const { return this->sanitizeDecimals("nan", ".0"); }

std::ostream &operator<<(std::ostream &out, const ScalarConverter &Converter) {
	out << "char: " << Converter.converterChar() << std::endl;
	out << "int: " << Converter.converterInt() << std::endl;
	out << "float: " << Converter.converterFloat() << std::endl;
	out << "double: " << Converter.converterDouble();
	return (out);
}
