/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 23:10:32 by parrot            #+#    #+#             */
/*   Updated: 2023/05/12 23:09:56 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cstdlib>
# include <string>

# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define BOLDGREEN	"\033[1m\033[32m"
# define YELLOW		"\033[0;33m"
# define MAGENTA	"\033[0;35m"
# define BLACK		"\033[0;30m"
# define VIOLET		"\033[0;35m"
# define WHITE		"\033[0;37m"
# define ORANGE		"\033[0;94m"
# define BLUE		"\033[0;34m"
# define NONE		"\033[0m"

# define BAD_USG	"Available commands: ADD | SEARCH | EXIT\n"
# define ENTER_CMD	"Enter command: ADD | SEARCH | EXIT\n"
# define FULL_BOOK	"The phonebook is full. No new contacts pls.\n"

class PhoneBook
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_number;
		std::string	_secret;

		static int	_contactNb;
		void		_printContact(PhoneBook contact);
		void		_getInfo(std::string msg, std::string &contactStr);

	public:
		static int	addContact(PhoneBook &contact);
		static void	searchContact(PhoneBook *contact);
		static int	getContactNb(void);
		
		PhoneBook(void);
		~PhoneBook(void);
};

// class PhoneBook
// {
// 	public:
// 		Contact cont[8];
// 		int		n;
// };

// class PhoneBook
// {
// 	public:
// 		PhoneBook(void);
// 		~PhoneBook();

// 		void	setContact(void);
// 		void	getContact(int) const;
// 		void	searc(void) const;
// 	private:
// 		Contact _contacts[8];
// 		int		_n;
// };


#endif
