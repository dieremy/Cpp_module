#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap: public virtual ClapTrap
{
	public:
		void		guardGate( void );

		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &st );
		~ScavTrap();

		ScavTrap	&operator=( const ScavTrap &ct );	
};

#endif

// Deleting a derived class object using a pointer of base class type
// that has a non-virtual destructor results in undefined behavior.
// To correct this situation, the base class should be defined with a "virtual" destructor. 
// Making base class destructor virtual guarantees
// that the object of derived class is destructed properly.

// Public Mode: If we derive a subclass from a public base class.
	// Then the public member of the base class will become public in the derived class
	// and protected members of the base class will become protected in the derived class.
// Protected Mode: If we derive a subclass from a Protected base class.
	// Then both public members and protected members of the base class
	// will become protected in the derived class.
// Private Mode: If we derive a subclass from a Private base class.
	// Then both public members and protected members of the base class
	// will become Private in the derived class.