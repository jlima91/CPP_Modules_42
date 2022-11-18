/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/11/17 19:08:27 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain( std::string level )
{
    if (level == "debug")
        debug();
}

void Harl::debug(void)
{
    std::cout << "Debugging" << std::endl;   
}

void Harl::info(void)
{
    std::cout << "Informing" << std::endl;   
}

void Harl::warning(void)
{
    std::cout << "Warning" << std::endl;  
}

void Harl::error(void)
{
    std::cout << "Erroring" << std::endl;  
}


