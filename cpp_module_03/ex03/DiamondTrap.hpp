#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	private:
		std::string	_dName;

	public:
		DiamondTrap();
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &dt );
		~DiamondTrap();

		DiamondTrap	&operator=( const DiamondTrap &dt );
		void		whoAmI( void );
		void		attack( const std::string &target );
};

#endif

// when multiple inheritances occur, use a virtual base class
// it prevents duplication of its data members: only one copy
// of its data is shared. If not used, all derived classes will
// get duplicated data members 