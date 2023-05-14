/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 23:10:32 by parrot            #+#    #+#             */
/*   Updated: 2023/05/14 19:17:31 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include "Contact.hpp"

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


class PhoneBook
{
	private:
		Contact cont[8];
	public:
		Contact	addContact(PhoneBook pippofranco, int i);
		int		searchContact(PhoneBook	pippofranco, Contact *ct, int i);
		int		truncInfo(std::string str);
		Contact	getContact(void);
		void	setContact(int i);
		void	getInfo(std::string msg, std::string contactStr);
		
		PhoneBook(void);
		~PhoneBook(void);
};

#endif
