/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 23:10:32 by parrot            #+#    #+#             */
/*   Updated: 2023/05/11 22:40:17 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <stdlib.h>

class Contact
{
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	number;
		std::string	secret;

	void	display(void)
	{
		std::cout << first_name;
		std::cout << " : ";
		std::cout << number << std::endl;
	}
};

class PhoneBook
{
	public:
		Contact cont[8];
		int		n;
};

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
