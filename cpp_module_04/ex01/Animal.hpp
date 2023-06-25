#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	protected:
		std::string	_type;
		std::string	_sound;

	public:
		Animal();
		Animal( std::string type );
		Animal( const Animal &A );
		virtual ~Animal();

		Animal		&operator=( const Animal &A );
		
		void		makeSound( void ) const ;
		std::string	getType( void ) const ;
};

#endif