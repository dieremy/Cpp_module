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

		// static char		getChar( void );
		// static int		getInt( void );
		// static float	getFloat( void );
		// static double	getDouble( void );

		std::string		converterChar() const;
		std::string		converterInt( void );
		std::string		converterFloat( void );
		std::string		converterDouble( void );

		ScalarConverter	&operator=( const ScalarConverter &Converter );
};

std::ostream			&operator<<( std::ostream &out, const ScalarConverter &Converter );

#endif