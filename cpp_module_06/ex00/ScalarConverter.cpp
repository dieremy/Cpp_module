#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() : _input("")
{
	return ;
}

ScalarConverter::ScalarConverter( std::string input ) : _input(input)
{
	return ;
}

ScalarConverter::ScalarConverter( const ScalarConverter &Converter )
{
	*this = Converter;
	return ;
}

ScalarConverter::~ScalarConverter()
{
	return ;
}

// char			ScalarConverter::getChar( void )
// {}

// int				ScalarConverter::getInt( void )
// {}

// float			ScalarConverter::getFloat( void )
// {}

// double			ScalarConverter::getDouble( void )
// {}

std::string		ScalarConverter::converterChar() const
{
	char array[_input.length() + 1]; 
	std::string imp_string = "impossible";
	int	check;

	strcpy(array, _input.c_str());	
	check = atoi(array);
	if (check <= 32 || check >= 126)
		return ("0");

	if (array[0] == 'n' && array[1] == 'a' && array[2] == 'n' && array[2] == '\0')
		return (imp_string);
	if ((array[0] == '+' || array[0] == '-') && array[1] == 'i' && array[2] == 'n' && array[2] == 'f' && array[3] == '\0')
		return (imp_string);
	if ((array[0] == '+' || array[0] == '-') && array[1] == 'i' && array[2] == 'n' && array[2] == 'f' && array[3] == 'f' && array[4] == '\0')
		return (imp_string);
	
	return (static_cast<std::string>(_input));
}

std::string		ScalarConverter::converterInt( void )
{}

std::string		ScalarConverter::converterFloat( void )
{}

std::string		ScalarConverter::converterDouble( void )
{}

ScalarConverter	&ScalarConverter::operator=( const ScalarConverter &Converter )
{
	if (this != &Converter)
		this->_input = Converter._input;
	return (*this);
}

std::ostream	&operator<<( std::ostream &out, const ScalarConverter &Converter )
{
	out << Converter.converterChar();
	return (out);
}
