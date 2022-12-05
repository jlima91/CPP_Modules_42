/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 16:55:04 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is in keeper mode." << std::endl;
}

ScavTrap::ScavTrap(std::string str): ClapTrap(str)
{
    this->hit_points = 100;
	this->energy_points = 50;
	this->damage = 20;
    std::cout << "ClapTrap " << this->name << " will server as a ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " dutti's over." 
        << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(--this->energy_points > 0 && this->hit_points != 0) 
    { 
        std::cout << "ScavTrap " << this->name << " attacks " << target <<
            ", causing " << this->damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "Not enough points, sorry." << std::endl;
}