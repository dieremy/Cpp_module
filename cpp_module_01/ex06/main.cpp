/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:37:15 by parrot            #+#    #+#             */
/*   Updated: 2023/06/02 18:48:30 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Harl.hpp"

int main(int ac, char **av)
{
	Harl	Harl;
	
	if (ac == 2)
		Harl.complain(av[1]);
	else
		std::cout << RED << "[ bad usage ]\nusage: ./harlFilter [ single argument ]" << NONE << std::endl;
}