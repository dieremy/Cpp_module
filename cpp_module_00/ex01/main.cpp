/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 21:33:45 by parrot            #+#    #+#             */
/*   Updated: 2023/05/19 18:04:05 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook 	pippofranco;
	std::string	cmd;
	int			i;
	
	i = 0;
	while (1)
	{	
		std::cout << YELLOW << ENTER_CMD << NONE;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			if (i == 8)
				i = 0;
			pippofranco.addContact(i);
			i++;
		}
		else if (cmd == "SEARCH")
			pippofranco.searchContact();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << RED << BAD_USG1 << NONE;
	}
	return (0);
}
