#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstring>
# include <stdlib.h>
# include <sstream>

class ScalarConverter {
private:
	std::string _input;

public:
	ScalarConverter() : _input("") { return; };

	ScalarConverter(std::string input) : _input(input) { return; };

	ScalarConverter(const ScalarConverter &Converter) {
		*this = Converter;
		return;
	};

	ScalarConverter &operator=(const ScalarConverter &Converter) {
		if (this != &Converter)
			this->_input = Converter._input;
		return *this;
	}

	~ScalarConverter() { return; };

	std::string converterChar() const;

	std::string converterInt(void) const;

	std::string converterFloat(void) const;

	std::string converterDouble(void) const;

	int compareInput(std::string check) const;

	std::string sanitizeDecimals(std::string nan, std::string last) const;

};

std::ostream &operator<<(std::ostream &out, const ScalarConverter &Converter);

#endif