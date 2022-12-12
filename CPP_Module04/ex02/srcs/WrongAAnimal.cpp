/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 17:18:24 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal()
{
    std::cout << "[ WrongAAnimal ] is born!" << std::endl;
}

WrongAAnimal::~WrongAAnimal()
{
    std::cout << "[ WrongAAnimal ] - " << this->type << " went on with its life." 
        << std::endl;
}

WrongAAnimal&   WrongAAnimal::operator=(const WrongAAnimal& copy) 
{
    std::cout << "[ WrongAAnimal ]" << this->type << " has been copied with copy assignment operator." << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

WrongAAnimal::WrongAAnimal( const WrongAAnimal& copy ) 
{
    *this = copy;
    std::cout << "[ WrongAAnimal ]" << this->type << " has been copied with copy constuctor." << std::endl;
}

void WrongAAnimal::makeSound() const
{
    std::cout << "[ WrongAAnimal ] wrong undefined sounds!" << std::endl;
}

std::string WrongAAnimal::getType() const
{
   return (this->type); 
}