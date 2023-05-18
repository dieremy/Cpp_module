/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 21:33:45 by parrot            #+#    #+#             */
/*   Updated: 2023/05/18 16:55:12 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	pippofranco;
	std::string	cmd;
	Contact 	ct;
	
	pippofranco = PhoneBook();
	while (1)
	{	
		std::cout << YELLOW << ENTER_CMD << NONE;
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			pippofranco.addContact();
		}
		else if (cmd == "SEARCH")
		{
			pippofranco.searchContact();
		}
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << RED << BAD_USG1 << NONE;
	}
	return (0);
}













// void	truncInfo(std::string str)
// {
// 	std::cout << " | ";
// 	if (str.size() > 10)
// 	{
// 		str.resize(9);
// 		std::cout << str;
// 		std::cout << ".";
// 	}
// 	else
// 		std::cout << str;
// }

// int	ft_is_digit(int n)
// {
// 	return ((n >= 0 && n <= 9) ? 1 : 0);
// }

// int main()
// {
// 	PhoneBook	pBook;
// 	std::string	cmd;
// 	int			ix;
// 	int			i;
	
// 	pBook.n = 0;
// 	while (1)
// 	{	
// 		std::cout << YELLOW << ENTER_CMD << NONE;
// 		std::cin >> cmd;
// 		if (cmd == "ADD")
// 		{
// 			std::cout << "Correctly adding contact of index no.: " << GREEN << pBook.n << NONE << std::endl;
// 			i = -1;
// 			while (--i >= 0)
// 				pBook.cont[i + 1] = pBook.cont[i];
// 			std::cout << GREEN << "Enter " << BOLDGREEN << "FIRST NAME: " << NONE;
// 			std::cin >> pBook.cont[0].firstName;
// 			std::cout << "The FIRST NAME entered is : " << BOLDGREEN + pBook.cont[0].firstName + NONE << std::endl;

// 			std::cout << GREEN << "Enter " << BOLDGREEN << "LAST NAME: " << NONE;
// 			std::cin >> pBook.cont[0].lastName;
// 			std::cout << "The LAST NAME entered is : " << BOLDGREEN + pBook.cont[0].lastName + NONE << std::endl;
			
// 			std::cout << GREEN << "Enter " << BOLDGREEN << "NICKNAME: " << NONE;
// 			std::cin >> pBook.cont[0].nickName;
// 			std::cout << "The NICKNAME entered is : " << BOLDGREEN + pBook.cont[0].nickName + NONE << std::endl;

// 			std::cout << GREEN << "Enter " << BOLDGREEN << "PHONE NUMBER: " << NONE;
// 			std::cin >> pBook.cont[0].phone;
// 			std::cout << "The FIRST NAME entered is : " << BOLDGREEN + pBook.cont[0].firstName + NONE << std::endl;

// 			std::cout << GREEN << "Enter " << BOLDGREEN << "DARKEST SECRET: " << NONE;
// 			std::cin >> pBook.cont[0].secret;
// 			std::cout << "The FIRST NAME entered is : " << BOLDGREEN + pBook.cont[0].secret + NONE << std::endl;
			
// 			if (pBook.n < 8)
// 				pBook.n++;
// 		}
// 		else if (cmd == "SEARCH")
// 		{
// 			i = -1;
// 			while (++i < pBook.n)
// 			{
// 				std::cout << BLUE << i;
// 				truncInfo(pBook.cont[i].firstName);
// 				truncInfo(pBook.cont[i].lastName);
// 				truncInfo(pBook.cont[i].nickName);
// 				std::cout << " | " << NONE << std::endl;
// 			}
// 			std::cout << "Input desired index: ";
// 			std::cin >> ix;
// 			ix--;
// 			if (ft_is_digit(ix) && ix < pBook.n && ix > 0)
// 			{
// 				std::cout << BOLDBLUE << "FIRST NAME: " + pBook.cont[ix].firstName << std::endl;
// 				std::cout <<  "LAST NAME: " + pBook.cont[ix].lastName << std::endl;
// 				std::cout << "NICKNAME: " + pBook.cont[ix].nickName << std::endl;
// 				std::cout << "NUMBER: " + pBook.cont[ix].phone << std::endl;
// 				std::cout << "DARKEST SECRET: " + pBook.cont[ix].secret << NONE << std::endl;
// 			}
// 			else
// 				std::cout << RED << BAD_USG3 << NONE;
// 		}
// 		else if (cmd == "EXIT")
// 			break ;
// 		else
// 			std::cout << RED << BAD_USG1 << NONE;
// 	}
// 	return (0);
// }

