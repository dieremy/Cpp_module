/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 23:10:32 by parrot            #+#    #+#             */
/*   Updated: 2023/05/13 23:43:40 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cstdlib>
# include <string>

# define NONE		"\033[0m"
# define RED		"\033[0;31m"
# define YELLOW		"\033[0;33m"
# define MAGENTA	"\033[0;35m"
# define BLACK		"\033[0;30m"
# define VIOLET		"\033[0;35m"
# define WHITE		"\033[0;37m"
# define ORANGE		"\033[0;94m"
# define GREEN		"\033[0;32m"
# define BLUE		"\033[0;34m"
# define BOLDGREEN	"\033[1m\033[32m"
# define BOLDBLUE	"\033[1m\033[34m"

# define BAD_USG1	"Available commands: ADD | SEARCH | EXIT\n"
# define BAD_USG2	"No contact in the phonebook. Use ADD to insert a contact\n"
# define BAD_USG3	"Pls enter a valid index number, SEARCH again.\n"
# define ENTER_CMD	"Enter command: ADD | SEARCH | EXIT\n"
# define FULL_BOOK	"The phonebook is full. No new contacts pls.\n"


class Contact
{
	public:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phone;
		std::string	secret;	
};

class PhoneBook
{
	public:
		Contact cont[8];
		int		n;
};

#endif