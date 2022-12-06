/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 17:18:24 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string str): name(str)
{
    std::cout << "[ Animal ] " << this->name << " is born!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "[ Animal ] " << this->name << " went on with its life." 
        << std::endl;
}

Animal&   Animal::operator=(const Animal& copy) 
{
    std::cout << "[ Animal ]" << this->name << " has been copied with copy assignment operator." << std::endl;
    return *this;
}

Animal::Animal( const Animal& copy ) 
{
    *this = copy;
    std::cout << "[ Animal ]" << this->name << " has been copied with copy constuctor." << std::endl;
}
