/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:24:06 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/20 17:11:11 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

# define NONE		"\033[0m"
# define RED		"\033[0;31m"
# define YELLOW		"\033[0;33m"
# define VIOLET		"\033[0;35m"
# define GREEN		"\033[0;32m"
# define CYAN		"\033[0;36m"
# define BOLDGREEN	"\033[1m\033[32m"
# define BOLDBLUE	"\033[1m\033[34m"

class Zombie
{
private:
	std::string	_name;

public:
	void		announce( void );

	Zombie( std::string name );
	~Zombie();
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif