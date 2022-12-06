/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/06 12:05:56 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string str): Animal(str)
{
    std::cout << "[ Animal ] " << this->name << " is a Dog" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "[ Dog ] " << this->name << " will now enjoy retirement." 
        << std::endl;
}
