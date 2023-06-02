/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:28:12 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/02 16:28:23 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/sed.hpp"

int	replaceStr( std::string *out, std::string s1, std::string s2 )
{
	// .find searchesw the string
	// for te first occurence of the sequence
	// specified by its arguments "strnstr"
	
	size_t	start;

	while ((start = (*out).find(s1)) != std::string::npos)
	{
		(*out).erase(start, s1.length());
		(*out).insert(start, s2);
	}
	return (0);
}

int main(int ac, char *av[])
{
    if (ac != 4)
	  	std::cout << RED << "not the right number of elements..." << NONE << std::endl;
    else
	{
		std::string	s1;
		std::string	s2;
		std::string	buff;
		char		*fileName;
		
		s1 = av[2];
		s2 = av[3];
		if (!s1.length() || !s2.length())
			std::cout << RED << "empty resource" << NONE << std::endl;
			
		std::ifstream	ifs(av[1]);
		if (!ifs.is_open())
		{
			std::cout << RED << "IN file couldn't be opened." << NONE << std::endl;
			return (-1);
		}
		fileName = strcat(av[1], ".replace");
		std::ofstream	ofs(fileName);
		if (!ofs.is_open())
		{
			std::cout << RED << "out file couldn't be opened." << NONE << std::endl;
			return (-1);
		}	
		while (std::getline(ifs, buff))
		{
			replaceStr(&buff, s1, s2);
			if (!ifs.eof())
				ofs << buff << std::endl;
		}
		ofs.close();
		ifs.close();
		std::cout << GREEN << "WELL DONE, BOY." << NONE << std::endl;
	}
    return (0);
}