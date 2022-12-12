/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/08 09:58:49 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog")
{
    this->brain = new Brain();
    std::cout << "[ " << this->type << " ] constructor called!" << std::endl;
}

Dog::~Dog(void)
{
    delete this->brain;
    std::cout << "[ " << this->type << " ] deconstructor called!" << std::endl;
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