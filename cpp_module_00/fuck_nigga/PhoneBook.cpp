/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:50:26 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/18 23:33:17 by parrot           ###   ########.fr       */
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

void	PhoneBook::addContact()
{
	std::cout << "Correctly adding contact of index no.: " << GREEN << this->index << NONE << std::endl;
	
	if (this->index == 8)
	{
		this->cont[7].~Contact();
		this->index--;	
	}
	if (this->index != 0)
	{
		int i = this->index; 
		while (--i >= 0)
			this->cont[i + 1] = this->cont[i];
	}
	this->cont[0] = Contact();
	this->cont[0].add_cont();
	this->index++;
}

int	ft_is_valid(int n)
{
	return ((n >= 0 && n <= 7) ? 1 : 0);
}

int	ft_abs(int n)
{
	return ((n < 0) ? n * -1 : n);
}

int	PhoneBook::show_data()
{
	int	i;

	std::cout << BLUE << "INDEX     |FIRSTNAME |LAST_NAME |NICK_NAME |" << NONE << std::endl;
	i = -1;
	while (++i < this->index)
		this->cont[i].show_info(i);
	return (0);	
}

int	PhoneBook::searchContact()
{
	
	int	select;	
	
	this->show_data();
	
	std::cout << NONE << std::endl;
	std::cout << "Input desired index: ";
	std::cin >> select;
	if (ft_is_valid(select))
	{
		std::cout << BOLDBLUE << "FIRST NAME: " + cont[select].get_firstName() << std::endl;
		std::cout <<  "LAST NAME: " + cont[select].get_lastName() << std::endl;
		std::cout << "NICKNAME: " + cont[select].get_nickName() << std::endl;
		std::cout << "NUMBER: " + cont[select].get_phone() << std::endl;
		std::cout << "DARKEST SECRET: " + cont[select].get_secret() + NONE << std::endl;
	}
	else
		std::cout << RED << BAD_USG3 << NONE;
	return (0);
}

