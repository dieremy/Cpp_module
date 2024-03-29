/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:28:52 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/06 16:38:40 by robegarc         ###   ########.fr       */
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
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	int	i;
	
	if (level.compare("DEBUG") && level.compare("INFO") && level.compare("WARNING") && level.compare("ERROR"))
		std::cout << RED << "\"level\" NOT in scope..." << NONE << std::endl;

	/* MATRIX-FUNCTIONS */
	void	(Harl::*complain[4])( void ) = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	/* MATRIX-FUNCTIONS DECLARATION */
	std::string	ft_level[4] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	i = -1;
	while (++i < 4)
		if (level == ft_level[i])
			(this->*complain[i])();

	/* MECHANICHAL WAY */
	// if (!level.compare("DEBUG"))	
	// 	this->debug();
	// if (!level.compare("INFO"))
	// 	this->info();
	// if (!level.compare("WARNING"))
	// 	this->warning();
	// if (!level.compare("ERROR"))
	// 	this->error();
}
