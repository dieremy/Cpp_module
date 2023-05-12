/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 21:33:45 by parrot            #+#    #+#             */
/*   Updated: 2023/05/12 23:22:11 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string	cmd;
	PhoneBook	contact[8];

	while (1)
	{	
		std::cout << YELLOW << ENTER_CMD << NONE;
		std::cin >> cmd;
		if (cmd == "ADD")
			PhoneBook::addContact(contact[PhoneBook::getContactNb()]);
		else if (cmd == "SEARCH")
			PhoneBook::searchContact(contact);
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << RED << BAD_USG1 << NONE;
	}
	return (0);
}

