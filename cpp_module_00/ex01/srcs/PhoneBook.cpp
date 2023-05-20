/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:50:26 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/20 17:29:47 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"


PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::addContact(int i)
{
	std::string	temp;
	std::cout << "Correctly adding contact of index no.: " << GREEN << i << NONE << std::endl;

	std::cout << GREEN << "Enter " << BOLDGREEN << "first name : " << NONE ;
	std::getline(std::cin, temp);
	this->cont[i].set_firstName(temp);
	std::cout << "The first name entered is : " << BOLDGREEN + this->cont[i].get_firstName() + NONE << std::endl;

	std::cout << GREEN << "Enter " << BOLDGREEN << "last name : " << NONE ;
	std::getline(std::cin, temp);
	this->cont[i].set_lastName(temp);
	std::cout << "The last name entered is : " << BOLDGREEN + this->cont[i].get_lastName() + NONE << std::endl;

	std::cout << GREEN << "Enter " << BOLDGREEN << "nick name : " << NONE ;
	std::getline(std::cin, temp);
	this->cont[i].set_nickName(temp);
	std::cout << "The nick name entered is : " << BOLDGREEN + this->cont[i].get_nickName() + NONE << std::endl;

	std::cout << GREEN << "Enter " << BOLDGREEN << "phone number : " << NONE ;
	std::getline(std::cin, temp);
	this->cont[i].set_phone(temp);
	std::cout << "The phone number entered is : " << BOLDGREEN + this->cont[i].get_phone() + NONE << std::endl;

	std::cout << GREEN << "Enter " << BOLDGREEN << "darkest secret : " << NONE ;
	std::getline(std::cin, temp);
	this->cont[i].set_secret(temp);
	std::cout << "The darkest secret entered is : " << BOLDGREEN + this->cont[i].get_secret() + NONE << std::endl;
}


int	PhoneBook::show_data()
{
	int	i;

	std::cout << CYAN << "--------------------------------------------------" << NONE << std::endl;
	std::cout << CYAN << "| INDEX    | FIRST_NAME | LAST_NAME  | NICK_NAME |" << NONE << std::endl;
	std::cout << CYAN << "--------------------------------------------------" << NONE << std::endl;
	i = -1;
	while (++i < 8)
	{
		std::cout << CYAN << "| " << i << "       ";
		this->cont[i].show_info();
		std::cout << CYAN << "--------------------------------------------------" << NONE << std::endl;

	}
	return (0);
}

int	ft_atoi(std::string str)
{
	int	i;
	int	sign;
	int	r;

	i = 0;
	sign = 1;
	r = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (-1);
		r = r * 10 + str[i++] - '0';
	}
	return (r * sign);
}

int	ft_is_valid(int n)
{
	return ((n >= 0 && n <= 7) ? 1 : 0);
}

int	PhoneBook::searchContact()
{
	this->show_data();

	std::string	number;
	std::cout << "Input desired index: ";
	std::getline(std::cin, number);

	int	select = ft_atoi(number);

	if (ft_is_valid(select))
	{
		std::cout << CYAN << "FIRST NAME:\t" << cont[select].get_firstName() << std::endl;
		std::cout <<  "LAST NAME:\t" << cont[select].get_lastName() << std::endl;
		std::cout << "NICKNAME:\t" << cont[select].get_nickName() << std::endl;
		std::cout << "NUMBER:\t\t" << cont[select].get_phone() << std::endl;
		std::cout << "DARKEST SECRET:\t" << cont[select].get_secret() + NONE << std::endl;
	}
	else
		std::cout << RED << BAD_USG3 << NONE;
	return (0);
}
