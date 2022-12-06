/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 12:37:03 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
    if(--this->energy_points > 0 && this->hit_points != 0) 
    { 
        std::cout << "ClapTrap " << this->name << " attacks " << target <<
            ", causing " << this->damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "Not enough points, sorry." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " just took " << amount <<
        " of damage, ouch!" << std::endl;
    this->hit_points = this->hit_points - amount;
    if (this->hit_points < 0)
        this->hit_points = 0;
    if(this->hit_points <= 0)
        std::cout << "You have 0 health." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(--this->energy_points > 0)
    {  
        this->hit_points = this->hit_points + amount;
        std::cout << "ClapTrap " << this->name << " just repaired itself for " 
            << amount << " of health!" << std::endl;
    }
    else
        std::cout << "Not enough energy points, sorry." << std::endl;
}

ClapTrap::ClapTrap()
{
    std::cout << "What is your name?" << std::endl;
    std::cin >> this->name;
    std::cout << "ClapTrap " << this->name << " created!" << std::endl;
    hit_points = 10;
	energy_points = 10;
	damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " went on with its life." 
        << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& copy) 
{
    this->name = copy.name;
    this->hit_points = copy.hit_points;
    this->energy_points = copy.energy_points;
    this->damage = copy.damage;
    std::cout << "ClapTrap " << this->name << " has been copied with copy assignment operator." << std::endl;
    return *this;
}

ClapTrap::ClapTrap( const ClapTrap& copy ) 
{
    *this = copy;
    std::cout << "ClapTrap " << this->name << " has been copied with copy constuctor." << std::endl;
}
