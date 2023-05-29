/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:30:33 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/29 12:28:20 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/sed.hpp"

int sed( char const *file, std::string s1, std::string s2 )
{
	// .fail will check the overall "health" of the stream, 
	// which involves things such as checking the stream
	// has currently entered a fail state
	// from trying to read an invalid value
	
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		buff;
	std::string		out;

	std::string filetto = file;
	// if (!file.length() || !s1.length() || !s2.length())
		std::cout << "empty resource" << std::endl;
	
	ifs.open(file);
	if (!ifs.fail())
	{
		std::cout << "file couldn't be opened." << std::endl;
		return (-1);
	}
	
	// ofs.open(file);
	// if (!ofs.fail())
	// {
	// 	std::cout << "file couldn't be opened." << std::endl;
	// 	return (0);
	// }
		
	while (std::getline(ifs, buff))
	{
		if (ifs.eof())
			break ;
		out += buff;
		out += "\n";
	}
	
	ifs.close();
	char *filone = strcat((char *)file, ".replace");
	// ofs.close();
    std::fstream fs;
    fs.open(filone, std::fstream::in | std::fstream::out | std::fstream::app);
	if (!fs.fail())
	{
		std::cout << "file couldn't be opened." << std::endl;
		return (-1);
	}

    fs << out;
	fs.close();
	
    return (0);
}