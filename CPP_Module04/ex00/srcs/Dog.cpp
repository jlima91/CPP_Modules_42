/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/06 17:37:14 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string str): Animal(str)
{
    std::cout << "[ Animal ] will server as a " << this->type << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "[ " << this->type << " ] dutti's over." << std::endl;
}

void Dog::makeSound()
{
    std::cout << "[ Dog ] barks!" << std::endl;
}