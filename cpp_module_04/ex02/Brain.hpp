#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class	Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain();
		Brain( const Brain &B );
		~Brain();
		
		Brain	&operator=( const Brain &B );
};

#endif
