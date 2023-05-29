/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:33:19 by robegarc          #+#    #+#             */
/*   Updated: 2023/05/29 12:56:13 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Harl.hpp"

int main()
{
    Harl    harl;

    harl.complain("DEBUG");
    std::cout << "\n";
    harl.complain("INFO");
    std::cout << "\n";
    harl.complain("WARNING");
    std::cout << "\n";
    harl.complain("ERROR");
    return (0);
}
