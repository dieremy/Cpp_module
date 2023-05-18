/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:50:26 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/18 17:06:16 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"


PhoneBook::PhoneBook()
{
	this->index = 0;
}

PhoneBook::~PhoneBook()
{
	for (int i = 0; i < this->index; i++)
		this->cont[i].~Contact();
}

int	PhoneBook::truncInfo(std::string str)
{
	std::cout << "simone" + str << std::endl;
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

void	PhoneBook::addContact()
{
	std::cout << "Correctly adding contact of index no.: " << GREEN << this->index << NONE << std::endl;
	
	// this->index == 8

	if (this->index != 0)
	{
		int x = this->index; 
		// for (int x = this->index; x >= 0; x--)
		while (x-- >= 0)
			this->cont[x + 1] = this->cont[x];
	}
	this->cont[0] = Contact();
	this->cont[0].add_cont();
	this->index++;
}

// void HitList::add(void)
// {
// 	// if (this->amount == 8)
// 	// {
// 	// 	std::cout << "-> It seems you have a lot of people to kill..." << std::endl;
// 	// 	std::cout << "-> I'll delete the first contact and add this." << std::endl;
// 	// 	this->contacts[7].~Contact();
// 	// 	this->amount--;
// 	// }
// 	if (this->amount != 0)
// 	{
// 		for (int x = this->amount; x >= 0; x--)
// 			this->contacts[x + 1] = this->contacts[x];
// 	}
// 	this->contacts[0] = Contact();
// 	this->contacts[0].add();
// 	this->amount++;
// }

int	ft_is_valid(int n)
{
	return ((n >= 0 && n <= 7) ? 1 : 0);
}

int	PhoneBook::searchContact()
{
	
	int	select;
	// int	i;
	
	// std::cout << BLUE << "\tindex | firstname | last name | nickname | number | darkest secret " << NONE << std::endl;
	// i = 0;
	
	std::cout << BLUE << "\t" << this->index;
	// std::cout << ct << std::endl;
	// std::cout << "godpork" + ct->get_firstName() << "diocane" << std::endl;
	for (int i = 0; i < this->index; i++)
	{
		this->truncInfo(this->cont[i]);
		this->truncInfo(this->cont[i]._lastName);
		this->truncInfo(this->cont[i]._secret);
	}
	
	// this->truncInfo(this->_firsName);
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

