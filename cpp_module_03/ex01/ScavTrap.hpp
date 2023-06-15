/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:16:08 by parrot            #+#    #+#             */
/*   Updated: 2023/06/15 15:29:22 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	private:
		std::string	_name;
		int			_hPoints;
		int			_ePoints;
		int			_aDamage;

	public:
		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
		void		guardGate( void );

		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &st );
		virtual ~ScavTrap();

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