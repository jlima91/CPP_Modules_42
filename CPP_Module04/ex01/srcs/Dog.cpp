/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/07 11:36:16 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog(void)
{
    delete this->brain;
    std::cout << "[ " << this->type << " ] dutti's over." << std::endl;
}

Dog&   Dog::operator=(const Dog& copy) 
{
    std::cout << "[ Dog ] has been copied with copy assignment operator." << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
        this->brain = new Brain(*copy.brain);
    }
    return *this;
}

Dog::Dog( const Dog& copy ) 
{
    *this = copy;
    std::cout << "[ Dog ] has been copied with copy constuctor." << std::endl;
}


void Dog::makeSound() const
{
    std::cout << "[ Dog ] barks!" << std::endl;
}