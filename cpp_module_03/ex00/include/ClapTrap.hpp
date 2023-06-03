/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 14:05:22 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/03 14:14:25 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cmath>
# include <cstdlib>
# include <cstring>
# include <iomanip>
# include <fstream>

# define NONE		"\033[0m"
# define RED		"\033[0;31m"
# define YELLOW		"\033[0;33m"
# define MAGENTA	"\033[0;35m"
# define BLACK		"\033[0;30m"
# define VIOLET		"\033[0;35m"
# define WHITE		"\033[0;37m"
# define ORANGE		"\033[0;94m"
# define GREEN		"\033[0;32m"
# define BLUE		"\033[0;34m"
# define CYAN		"\033[0;36m"
# define BOLDGREEN	"\033[1m\033[32m"
# define BOLDBLUE	"\033[1m\033[34m"

class	ClapTrap
{
	private:
		std::string	_name; // which is passed as parameter to a constructor
		int			_hitPoints; // represent the health of the ClapTrap
		int			_energyPoints;
		int			_attackDamage;

	public:
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		ClapTrap();
		~ClapTrap();
};

#endif