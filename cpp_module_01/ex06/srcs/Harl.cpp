/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:28:52 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/02 18:47:30 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl()
{
	;
}

Harl::~Harl()
{
	;
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::cicle( int i )
{
	void	( Harl::*complain[4] )( void ) = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	while (i < 4)
		(this->*complain[i++])();
}

void	Harl::complain( std::string level )
{
	int	i;
	int	index;
	std::string	ft_level[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	i = -1;
	index = -1;
	while (++i < 4)
	{
		if (level == ft_level[i])
		{
			index = i;
			break ;
		}
	}

	switch (index)
	{
		case (DEBUG):
			this->cicle(DEBUG);
			break ;	
		case (INFO):
			this->cicle(INFO);
			break ;	
		case (WARNING):
			this->cicle(WARNING);
			break ;	
		case (ERROR):
			this->cicle(ERROR);
			break ;	
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;	
	}
}
