/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 23:32:52 by parrot            #+#    #+#             */
/*   Updated: 2023/05/13 00:07:41 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::_nbCont = 0;

int	PhoneBook::getContactNb(void)
{
	return PhoneBook::_nbCont;
}

PhoneBook::PhoneBook(void)
{
	_first_name = "";
	_last_name = "";
	_nick_name = "";
	_number = "";
	_secret = "";
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

int	PhoneBook::addContact(PhoneBook &contact)
{
	if (PhoneBook::_nbCont >= 8)
	{
		std::cout << RED << FULL_BOOK;
		return (0);
	}
	PhoneBook::_nbCont++;
	std::cout << "Correctly adding contact of index no.: " << GREEN << PhoneBook::_nbCont << NONE << std::endl;
	contact._getInfo("FIRST NAME", contact._first_name);
	contact._getInfo("LAST NAME", contact._last_name);
	contact._getInfo("NICKNAME", contact._nick_name);
	contact._getInfo("PHONE NUMBER", contact._number);
	contact._getInfo("DARKEST SECRET", contact._secret);
	return (1);
}

void	PhoneBook::_getInfo(std::string msg, std::string &contactStr)
{
	std::cout << GREEN << "Enter " << BOLDGREEN << msg + ": " << NONE ;
	std::cin >> contactStr;
	std::cout << "The " + msg + " entered is : " << BOLDGREEN + contactStr + NONE << std::endl;
	return ;
}

int	PhoneBook::searchContact(PhoneBook *contact)
{
	int	select;
	int	i;

	if (!PhoneBook::getContactNb())
	{
		std::cout << RED << BAD_USG2 << NONE;
		return (-1);
	}
	std::cout << BLUE << "\tindex | firstname | last name | nickname | number | darkest secret " << NONE << std::endl;
	i = -1;
	while (++i < getContactNb())
	{
		std::cout << BLUE << "\t" << i + 1;
		contact[i]._truncInfo(contact[i]._first_name);
		contact[i]._truncInfo(contact[i]._last_name);
		contact[i]._truncInfo(contact[i]._nick_name);
		contact[i]._truncInfo(contact[i]._number);
		contact[i]._truncInfo(contact[i]._secret);
		std::cout << NONE << std::endl;
	}
	std::cout << "Input desired index: ";
	std::cin >> select;
	if (select < getContactNb() && select > 0)
	{
		std::cout << BOLDBLUE << "FIRST NAME: " + contact[select]._first_name << std::endl;
		std::cout <<  "LAST NAME: " + contact[select]._last_name << std::endl;
		std::cout << "NICKNAME: " + contact[select]._nick_name << std::endl;
		std::cout << "NUMBER: " + contact[select]._number << std::endl;
		std::cout << "DARKEST SECRET: " + contact[select]._secret + NONE << std::endl;
	}
	else
		std::cout << RED << BAD_USG3 << NONE;
	return (0);
}

int	PhoneBook::_truncInfo(std::string str)
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
