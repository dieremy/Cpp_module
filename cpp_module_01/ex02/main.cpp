/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:59:00 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/21 17:27:10 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define NONE		"\033[0m"
#define CYAN		"\033[0;36m"
#define BOLDBLUE	"\033[1m\033[34m"

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << CYAN << &str << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << NONE << std::endl;

    std::cout << std::endl;

    std::cout << BOLDBLUE << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << *&stringREF << NONE << std::endl;

    return (0);
}