/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/06 17:37:26 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string str): Animal(str)
{
    std::cout << "[ Animal ] will server as a " << this->type << std::endl;
}

Cat::~Cat()
{
    std::cout << "[ " << this->type << " ] dutti's over." << std::endl;
}

void Cat::makeSound()
{
    std::cout << "[ Cat ] meows!" << std::endl;
}