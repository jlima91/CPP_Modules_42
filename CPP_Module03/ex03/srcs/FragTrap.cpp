/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 18:03:13 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
    if(--this->energy_points > 0 && this->hit_points != 0) 
    { 
        std::cout << "FragTrap " << this->name << " high fives everybody." << std::endl;
    }
    else
        std::cout << "Not enough points, sorry." << std::endl;
}

FragTrap::FragTrap(std::string str): ClapTrap(str)
{
    this->hit_points = 100;
	this->energy_points = 100;
	this->damage = 30;
    std::cout << "ClapTrap " << this->name << " will server as a FragTrap" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->name << " dutti's over." 
        << std::endl;
}
