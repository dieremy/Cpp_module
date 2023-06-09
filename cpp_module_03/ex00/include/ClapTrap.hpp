/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 14:05:22 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/09 23:25:52 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "Global.hpp"

class	ClapTrap
{
	private:
		std::string	_name; // which is passed as parameter to a constructor
		int			_hitPoints; // represent the health of the ClapTrap
		int			_energyPoints;
		int			_attackDamage;

	public:
		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

		void		setName( std::string name );
		void		setHp( int hp );
		void		setEp( int ep );
		void		setAd( int ad );

		std::string	getName( void );
		int			getHp( void );
		int			getEp( void );
		int			getAd( void );

		ClapTrap	&operator=( const ClapTrap &cp );

		ClapTrap();
		ClapTrap( const ClapTrap &cp );
		ClapTrap( std::string name );
		virtual ~ClapTrap();
};

#endif