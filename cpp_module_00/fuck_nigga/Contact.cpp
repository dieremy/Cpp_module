/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:50:37 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/18 16:41:04 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

void	Contact::add_cont(void)
{
	// std::cout << "Enter contact first name: ";
	// std::cin >> this->_firstName;

	std::cout << GREEN << "Enter " << BOLDGREEN << "first name : " << NONE ;
	std::cin >> this->_firstName;
	std::cout << "The first name entered is : " << BOLDGREEN + this->_firstName + NONE << std::endl;
	// std::cout << "Enter contact first name: ";
	// std::cin >> this->_firstName;

	std::cout << GREEN << "Enter " << BOLDGREEN << "last name : " << NONE ;
	std::cin >> this->_lastName;
	std::cout << "The last name entered is : " << BOLDGREEN + this->_lastName + NONE << std::endl;
	// std::cout << "Enter contact first name: ";
	// std::cin >> this->_firstName;

	std::cout << GREEN << "Enter " << BOLDGREEN << "nick name : " << NONE ;
	std::cin >> this->_nickName;
	std::cout << "The nick name entered is : " << BOLDGREEN + this->_nickName + NONE << std::endl;
	// std::cout << "Enter contact first name: ";
	// std::cin >> this->_firstName;

	std::cout << GREEN << "Enter " << BOLDGREEN << "phone number : " << NONE ;
	std::cin >> this->_phone;
	std::cout << "The phone number entered is : " << BOLDGREEN + this->_phone + NONE << std::endl;
	// std::cout << "Enter contact first name: ";
	// std::cin >> this->_firstName;

	std::cout << GREEN << "Enter " << BOLDGREEN << "darkest secret : " << NONE ;
	std::cin >> this->_secret;
	std::cout << "The darkest secret entered is : " << BOLDGREEN + this->_secret + NONE << std::endl;

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
