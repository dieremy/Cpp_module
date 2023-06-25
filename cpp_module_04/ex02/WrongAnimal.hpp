#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	protected:
		std::string	_type;
		std::string	_sound;

	public:
		WrongAnimal();
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal &wA );
		virtual ~WrongAnimal();

		WrongAnimal	&operator=( const WrongAnimal &wA );
		
		void		makeSound( void ) const ;
		std::string	getType( void ) const ;
};

#endif