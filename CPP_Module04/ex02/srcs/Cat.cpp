/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/07 11:15:13 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "[ " << this->type << " ] dutti's over." << std::endl;
}

Cat&   Cat::operator=(const Cat& copy) 
{
    std::cout << "[ Cat ] has been copied with copy assignment operator." << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
        this->brain = new Brain(*copy.brain);
    }
    return *this;
}

Cat::Cat( const Cat& copy ) 
{
    *this = copy;
    std::cout << "[ Cat ] has been copied with copy constuctor." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "[ Cat ] meows!" << std::endl;
}