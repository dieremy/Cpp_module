/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:50:37 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/14 19:11:30 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::string _firstName = "";
	std::string _lastName = "";
	std::string _nickName = "";
	std::string _phone = "";
	std::string _secret = "";
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
	return ;
}
