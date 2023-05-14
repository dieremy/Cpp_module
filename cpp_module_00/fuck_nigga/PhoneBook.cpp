/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:50:26 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/14 19:17:20 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

// Contact	PhoneBook::getContact(void)
// {
//     return ;
// }

// void	PhoneBook::setContact(int i)
// {
//     return ;
// }

int	PhoneBook::truncInfo(std::string str)
{
	std::cout << " | ";
	if (str.size() > 10)
	{
		str.resize(9);
		std::cout << str;
		std::cout << ".";
	}
	else
		std::cout << str;
	return (0);	
}

void	PhoneBook::getInfo(std::string msg, std::string contactStr)
{
	std::cout << GREEN << "Enter " << BOLDGREEN << msg + ": " << NONE ;
	std::cin >> contactStr;
	std::cout << "The " + msg + " entered is : " << BOLDGREEN + contactStr + NONE << std::endl;
	return ;
}

Contact	PhoneBook::addContact(PhoneBook pippofranco, int i)
{
	(void)pippofranco;

	Contact ct;
	std::string input;
	std::cout << "Correctly adding contact of index no.: " << GREEN << i << NONE << std::endl;
	
	input = ct.get_firstName();
	ct.set_firstName(input);
	PhoneBook::getInfo("FIRST NAME", input);

	input = ct.get_lastName();
	ct.set_lastName(input);
	PhoneBook::getInfo("LAST NAME", input);

	input = ct.get_nickName();
	ct.set_nickName(input);
	PhoneBook::getInfo("NICK NAME", input);

	input = ct.get_phone();
	ct.set_phone(input);
	PhoneBook::getInfo("PHONE NUMBER", input);

	input = ct.get_secret();
	ct.set_secret(input);
	PhoneBook::getInfo("DARKEST SECRET", input);
	return (ct);
}

int	ft_is_valid(int n)
{
	return ((n >= 0 && n <= 7) ? 1 : 0);
}

int	PhoneBook::searchContact(PhoneBook pf, Contact *ct, int i)
{
	
	int	select;
	// int	i;
	
	// std::cout << BLUE << "\tindex | firstname | last name | nickname | number | darkest secret " << NONE << std::endl;
	// i = 0;
	
	std::cout << BLUE << "\t" << i;
	pf.truncInfo(ct[i].get_firstName());
	pf.truncInfo(ct[i].get_lastName());
	pf.truncInfo(ct[i].get_nickName());
	std::cout << NONE << std::endl;
	std::cout << "Input desired index: ";
	std::cin >> select;
	std::cout << select << std::endl;
	// std::cout << select << std::endl;
	if (ft_is_valid(select))
	{
		std::cout << BOLDBLUE << "FIRST NAME: " + ct[select].get_firstName() << std::endl;
		std::cout <<  "LAST NAME: " + ct[select].get_lastName() << std::endl;
		std::cout << "NICKNAME: " + ct[select].get_nickName() << std::endl;
		std::cout << "NUMBER: " + ct[select].get_phone() << std::endl;
		std::cout << "DARKEST SECRET: " + ct[select].get_secret() + NONE << std::endl;
	}
	else
		std::cout << RED << BAD_USG3 << NONE;
	return (0);
}

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}
