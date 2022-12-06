/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/06 12:05:32 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string str): Animal(str)
{
    std::cout << "[ Animal ] " << this->name << " will server as a Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "[ Cat ] " << this->name << " dutti's over." 
        << std::endl;
}
