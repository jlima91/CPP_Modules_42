/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/08 09:28:22 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAAnimal()
{
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "[ " << this->type << " ] dutti's over." << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "[ WrongCat ] wrong meows!" << std::endl;
}