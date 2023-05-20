/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:50:37 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/20 17:29:36 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(void)
{

}

int	Contact::truncInfo(std::string str)
{
	std::cout << " | ";
	if (str.size() >= 10)
	{
		str.resize(9);
		std::cout << str;
		std::cout << ".";
	}
	else
	{
		while (str.length() < 10)
			str.append(" ");
		std::cout << str;
	}
	return (0);
}

void	Contact::show_info()
{
	truncInfo(this->_firstName);
	truncInfo(this->_lastName);
	truncInfo(this->_nickName);
	std::cout << "|" << NONE << std::endl;
}

std::string Contact::get_firstName(void)
{
	return (this->_firstName);
}

void Contact::set_firstName(std::string str)
{
	this->_firstName = str;
}

std::string Contact::get_lastName(void)
{
	return (this->_lastName);
}

void Contact::set_lastName(std::string str)
{
	this->_lastName = str;
}

std::string Contact::get_nickName(void)
{
	return (this->_nickName);
}

void Contact::set_nickName(std::string str)
{
	this->_nickName = str;
}

std::string Contact::get_phone(void)
{
	return (this->_phone);
}

void Contact::set_phone(std::string str)
{
	this->_phone = str;
}

std::string Contact::get_secret(void)
{
	return (this->_secret);
}

void Contact::set_secret(std::string str)
{
	this->_secret = str;
}

Contact::~Contact(void)
{

}
