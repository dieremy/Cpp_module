#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstring>
# include <stdlib.h>

class ScalarConverter
{
	private:
		std::string		_input;

	public:
		ScalarConverter();
		ScalarConverter( std::string input );
		ScalarConverter( const ScalarConverter &Converter );
		~ScalarConverter();

		std::string		converterChar() const;
		std::string		converterInt( void ) const;
		std::string		converterFloat( void ) const;
		std::string		converterDouble( void ) const;

		ScalarConverter	&operator=( const ScalarConverter &Converter );
};

std::ostream			&operator<<( std::ostream &out, const ScalarConverter &Converter );

#endif