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

std::string		ScalarConverter::converterChar() const
{
	char array[_input.length() + 1]; 
	int	check;

	strcpy(array, _input.c_str());	
	if (array[0] == 'n' && array[1] == 'a' && array[2] == 'n')
		return ("impossible");
	if ((array[0] == '+' || array[0] == '-') && array[1] == 'i' && array[2] == 'n' && array[3] == 'f')
		return ("impossible");
	if ((array[0] == '+' || array[0] == '-') && array[1] == 'i' && array[2] == 'n' && array[3] == 'f' && array[4] == 'f')
		return ("impossible");

	check = std::atoi(array);
	if (check <= 32 || check >= 126)
		return ("Non displayable");

	char s[4] = {'\'', static_cast<char>(check), '\'', '\0'};
	return (s);
}

std::string		ScalarConverter::converterInt( void ) const
{
	char	array[_input.length() + 1]; 
	int		i;
	
	i = 0;
	while (i < _input.length())
	{
		if (_input[i] == '.')
			break ;
		array[i] = _input[i];
		i++;
	}
	array[i] = 0;

	if (array[0] == 'n' && array[1] == 'a' && array[2] == 'n')
		return ("impossible");
	if ((array[0] == '+' || array[0] == '-') && array[1] == 'i' && array[2] == 'n' && array[3] == 'f')
		return ("impossible");
	if ((array[0] == '+' || array[0] == '-') && array[1] == 'i' && array[2] == 'n' && array[3] == 'f' && array[4] == 'f')
		return ("impossible");

	return (array);
}

std::string		ScalarConverter::converterFloat( void ) const
{
	char	array[_input.length() + 4];
	int		i;
	
	i = 0;
	while (i < _input.length())
	{
		if (_input[i] == '.')
			break ;
		array[i] = _input[i];
		i++;
	}
	array[i] = 0;

	if (array[0] == 'n' && array[1] == 'a' && array[2] == 'n')
		return ("nanf");
	if ((array[0] == '+' || array[0] == '-') && array[1] == 'i' && array[2] == 'n' && array[3] == 'f')
		return ("impossible");
	if ((array[0] == '+' || array[0] == '-') && array[1] == 'i' && array[2] == 'n' && array[3] == 'f' && array[4] == 'f')
		return ("impossible");
	
	strcat(array, ".0f\0");
	return (array);
}

std::string		ScalarConverter::converterDouble( void ) const
{
	char	array[_input.length() + 3];
	int		check;

	int		i;
	
	i = 0;
	while (i < _input.length())
	{
		if (_input[i] == '.')
			break ;
		array[i] = _input[i];
		i++;
	}
	array[i] = 0;

	if (array[0] == 'n' && array[1] == 'a' && array[2] == 'n')
		return ("nan");
	if ((array[0] == '+' || array[0] == '-') && array[1] == 'i' && array[2] == 'n' && array[3] == 'f')
		return ("impossible");
	if ((array[0] == '+' || array[0] == '-') && array[1] == 'i' && array[2] == 'n' && array[3] == 'f' && array[4] == 'f')
		return ("impossible");

	strcat(array, ".0\0");
	return (array);
}

ScalarConverter	&ScalarConverter::operator=( const ScalarConverter &Converter )
{
	if (this != &Converter)
		this->_input = Converter._input;
	return (*this);
}

std::ostream	&operator<<( std::ostream &out, const ScalarConverter &Converter )
{
	out << "char: " << Converter.converterChar() << std::endl;
	out << "int: " << Converter.converterInt() << std::endl;
	out << "float: " << Converter.converterFloat() << std::endl;
	out << "double: " << Converter.converterDouble();
	return (out);
}
