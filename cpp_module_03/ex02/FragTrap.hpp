#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
	public:
		FragTrap();
		FragTrap( std::string name );
		FragTrap( const FragTrap &ft );
		~FragTrap();

		FragTrap	&operator=( const FragTrap &ft );
		void		highFiveGuys( void );
};

#endif