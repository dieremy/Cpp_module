#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : virtual public Animal
{
	private:
		Brain	*_Brain;

	protected:
		std::string	_type;
		std::string	_sound;

	public:
		Dog();
		Dog( std::string type );
		Dog( const Dog &D );
		virtual ~Dog();

		Dog		&operator=( const Dog &D );
		
		virtual void	makeSound( void ) const ;
		std::string	getType( void ) const ;
};

#endif