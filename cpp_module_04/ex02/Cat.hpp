#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : virtual public Animal
{
	private:
		Brain	*_Brain;

	protected:
		std::string	_type;
		std::string	_sound;

	public:
		Cat();
		Cat( std::string type );
		Cat( const Cat &C );
		virtual ~Cat();

		Cat		&operator=( const Cat &C );
		
		virtual void	makeSound( void ) const ;
		std::string	getType( void ) const ;
};

#endif