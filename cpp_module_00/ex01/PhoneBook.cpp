/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 23:32:52 by parrot            #+#    #+#             */
/*   Updated: 2023/05/11 23:45:12 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	put_shit(PhoneBook p)
{
	std::cout << "PORKGOD" << std::endl;
	std::cout << p.cont[0].first_name.append(" diocane lurido bastardo") << std::endl;
}

int main()
{
	PhoneBook p_book;
	std::string cmd;
	p_book.n = 0;
	int	i;
	int	selector;
	
	while (1)
	{
		system("clear");
		std::cout << "commands-> ADD, SEARCH, EXIT" << std::endl;
		put_shit(p_book);
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			system("clear");
			std::cout << "ADD NEW CONTACT" << std::endl;
			i = p_book.n;
			while (--i >= 0)
				p_book.cont[i + 1] = p_book.cont[i];
			std::cout << "first name of contact -> last name -> nick name -> number -> darkset secret" << std::endl;
			std::cin >> p_book.cont[0].first_name;
			while (p_book.cont[0].first_name.size() < 10)
				p_book.cont[0].first_name.append(" ");
			system("clear");

			std::cout << "add last name of ";
			std::cout << p_book.cont[0].first_name << std::endl;
			std::cin >> p_book.cont[0].last_name;
			while (p_book.cont[0].last_name.size() < 10)
				p_book.cont[0].last_name.append(" ");
			system("clear");

			std::cout << "add nick name of ";
			std::cout << p_book.cont[0].first_name << std::endl;
			std::cin >> p_book.cont[0].nick_name;
			while (p_book.cont[0].nick_name.size() < 10)
				p_book.cont[0].nick_name.append(" ");
			system("clear");

			std::cout << "add phone number of ";
			std::cout << p_book.cont[0].first_name << std::endl;
			std::cin >> p_book.cont[0].number;
			while (p_book.cont[0].number.size() < 10)
				p_book.cont[0].number.append(" ");
			system("clear");

			std::cout << "add darkset secret of ";
			std::cout << p_book.cont[0].first_name << std::endl;
			std::cin >> p_book.cont[0].secret;
			while (p_book.cont[0].secret.size() < 10)
				p_book.cont[0].secret.append(" ");
			system("clear");
			if (p_book.n < 8)
				p_book.n++;
		}
		else if (cmd == "SEARCH")
		{
			i = -1;
			while (++i < p_book.n)
			{
				std::cout << i + 1;
				std::cout << " " + p_book.cont[i].first_name;
				std::cout << " | ";
				std::cout << p_book.cont[i].last_name;
				std::cout << " | ";
				std::cout << p_book.cont[i].nick_name;
				std::cout << " | ";
				std::cout << p_book.cont[i].number;
				std::cout << " | ";
				std::cout << p_book.cont[i].secret;
				std::cout << " | " << std::endl;
			}
			std::cin >> selector;
			selector--;
			system("clear");
			if (selector < p_book.n || selector < 0)
			{
				std::cout << p_book.cont[selector].first_name << std::endl;
				std::cout << p_book.cont[selector].last_name << std::endl;
				std::cout << p_book.cont[selector].nick_name << std::endl;
				std::cout << p_book.cont[selector].number << std::endl;
				std::cout << p_book.cont[selector].secret << std::endl;
			}
			else
			{
				std::cout << "Invalid" << std::endl;
				cmd = "ADD";
			}
			while (1)
			{
				std::cout << "DIOCAN" << std::endl;
				std::cout << "type BACK to go back" << std::endl;
				if (cmd == "BACK")
					break ;
				std::cin >> cmd;
				std::cout << "DIOCAN2" << std::endl;
			}
		}
		else if (cmd == "EXIT")
			break ;
	}
}