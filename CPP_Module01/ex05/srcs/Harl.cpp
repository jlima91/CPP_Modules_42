/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 10:20:45 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* Funtion complain recieves a string as parameter   */
/* An array funtion of type Harl is initiated inside */
/* An array of strings containig the option          */
/* Depending on the string inserted  the correct     */
/* function is called                                */
/* More on pointers to member funtion in pdf inside  */
void Harl::complain( std::string level )
{
    void (Harl::*funcs[]) ( void ) = 
    { 
        &Harl::debug, 
        &Harl::info, 
        &Harl::warning, 
        &Harl::error 
    };
    
    std::string levels[] = { "debug", "info", "warning", "error"};
    
    int i = 0;
    while (i < 4 && levels[i].compare(level))
        i++ ;
    if (i < 4)
        (this->*funcs[i])();
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

Harl::Harl()
{
}

Harl::~Harl()
{
}

