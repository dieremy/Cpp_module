/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:33:19 by robegarc          #+#    #+#             */
/*   Updated: 2023/06/02 17:18:08 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Harl.hpp"

int main()
{
    Harl    harl;

    harl.complain("DEBUG");
    std::cout << "\n";
	harl.complain("GODDOG");
    std::cout << "\n";
    harl.complain("INFO");
    std::cout << "\n";
    harl.complain("WARNING");
    std::cout << "\n";
    harl.complain("ERROR");
	std::cout << "\n";
    harl.complain("WHITNEY HOUSTON");
    return (0);
}
